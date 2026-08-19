# Shadow Namespace Binding Ledger Induction

## Overview

Applications that load plugins at runtime can expose several implementations of
the same symbol. Which implementation is selected depends on the order in which
libraries were loaded, whether each library is globally or locally visible,
whether lookup uses the process namespace or one direct library handle, whether
the export is absent, hidden, weak, or strong, and whether loading is immediate
or lazy.

Your task is to recover the complete binding ledger of an unseen plugin
workflow. In plain language: for every unresolved symbol lookup, select the
provider library that the native loader used, or mark the lookup unresolved.
You must also report which modules repeatedly seed effective global scope and
which successful lookups use providers loaded lazily.

Each case contains anonymous module and load-context records, target lookup
records, candidate providers, 24 controlled lookups with observed outcomes, and
event rasters derived from the corresponding native executions. Train a model
from random initialization to transfer the support evidence to target lookups
whose candidate slots have been independently reordered.

## Definitions

- A module is one plugin or helper object with a local ID such as `M03`.
- A query is one symbol lookup requiring an answer, with an ID such as `Q07`.
- A candidate is one provider loaded in the query context. Its slot, such as
  `C02`, is local to that query and is independently permuted.
- A context is one captured library-load plan with recorded order, visibility
  scope, and now/lazy flags.
- A support resolution is one observed native binding decision supplied inside
  the same case.
- A scope root is a provider that repeatedly wins process-global lookups, or
  wins repeatedly while being globally loaded across at least four selected
  contexts.
- A deferred query is a successful query whose observed winning provider was
  loaded with `RTLD_LAZY` in that context.
- `U` is the literal unresolved choice.

## Data Origin and Experimental Grounding

This benchmark is built from controlled native executions, not from a fictional
resolver simulator and not from production telemetry.

The data-production workflow compiled 1,600 inert Mach-O dynamic libraries
across 1,552 profile-derived dependency edges with Apple Clang, executed 3,200
isolated plugin-load processes on macOS, and recorded 198,400 load/lookup
events. Each
worker called `dlopen` with recorded `RTLD_GLOBAL` or `RTLD_LOCAL` and
`RTLD_NOW` or `RTLD_LAZY` flags, then called `dlsym` through both the process
namespace and direct library handles. Provider choices, unresolved lookups,
load/lookup timing, source hashes, binary hashes, direct dependency lists, and
Mach-O UUIDs were frozen before benchmark cases were constructed. dyld could
auto-load a linked dependency before its explicit load, and direct-handle
lookup could return a symbol from that dependency; the benchmark preserves
those native outcomes.

The 200 fixture families are grounded in 200 diverse tests selected from the
LLVM `lld/test/ELF` regression suite at pinned commit
`9a793fd6d5ebd40bccd5d718c33f0a9dc29839c7`. These real linker tests supply
source-level profiles for weak and hidden symbols, shared objects, versioning,
archives, preemption, lazy loading, and related phenomena. They do not provide
the benchmark answers. Newly authored Mach-O fixtures adapt those profiles,
and all target bindings come from the observed native-loader outcomes.

The raw package includes selected source excerpts and hashes, fixture source
and binary hashes, build commands, toolchain metadata, the event log, the frozen
native outcome matrix, and the complete capture protocol. It contains no user
plugins, production binaries, credentials, personal data, or network traffic.

## Split and Anonymization

There are 4,000 cases from 200 captured workflow families:

- Training: 3,200 cases from 160 families.
- Test: 800 cases from 40 different families.
- Test-to-train case ratio: exactly 25 percent.
- Family overlap between training and test: zero.

Test families also have unseen upstream source profiles, export layouts, binary
hashes, load-plan mixtures, and outcome matrices. Every train and test case
receives a fresh anonymous codebook and event-channel permutation, which must be
inferred from that case's support evidence rather than memorized by family.

After native collection, a deterministic pipeline anonymizes categorical
values, samples support and target queries, and independently permutes local
candidate slots. It renders measured event sequences into 256-step,
eight-channel rasters and adds low-amplitude seeded measurement noise. The
renderer cannot change a native winner or failure. Raw provenance mappings and
native outcome matrices are excluded from prepared public test data.

The 24 support conditions and all target conditions in a case are exact-disjoint.
They still share contexts, symbols, provider roles, and case codebooks. This
makes support evidence useful for learning the workflow while preventing an
exact condition-to-provider lookup or candidate-slot copy.

Target lookups are audit-enriched. Selection prioritizes measured root lookups
whose native winner differs from the first explicitly global provider, and
direct-handle lookups that resolve through a dependency or remain unresolved.
If a case does not contain enough such events, the remainder is filled from
other exact-disjoint conditions. Selection never edits a measured outcome.
The private target-hardness fraction and native condition maps are raw audit
fields removed by `prepare.py`.

## Public Files

- `train.npz` contains all public input arrays and training targets.
- `test.npz` contains only public input arrays; no ledger, behavior, program, or
  weight targets are present.
- `train_cases.csv` and `test_cases.csv` map NPZ rows to case and family IDs and
  active dimensions. Raw capture/profile keys are removed.
- `sample_submission.csv` contains every test ID and a valid unresolved ledger.
- `tensor_schema.json` gives exact array names, dtypes, shapes, and field order.
- `task_schema.json` gives the target object and identifier grammar.
- `loader_semantics.json` separates measured axes from deterministic
  transformations.
- `CAPTURE_PROTOCOL.md` documents compilation, native execution, isolation,
  rendering, and leakage controls.
- `capture_summary.json` and `capture_toolchain.json` publish aggregate native
  collection counts, integrity hashes, host architecture, compiler, and pinned
  LLVM revision without exposing private outcome mappings.
- `DATASET_DESCRIPTION.md`, `SOURCES.md`, `LICENSE.md`, and `LLVM_LICENSE.txt`
  document every feature, provenance, and license.

## Input Arrays

The first dimension of every NPZ array is the case row. Padded positions are
zero and must be ignored with masks.

- `module_features`, int16, shape `N x 20 x 14`: module ID; anonymous scope
  code; observed mean explicit-load rank; one direct dependency parent or
  sentinel 19; direct dependency count; frequent-global flag; visible, weak,
  hidden, and absent export counts; and four source-derived nuisance buckets.
  A provider may have two direct parents, so the parent field is partial.
- `module_mask`, uint8, shape `N x 20`: active module positions.
- `context_features`, int16, shape `N x 8 x 12`: local context ID; anonymous
  scope code; first loaded provider; first global provider; mixed-scope flag;
  lazy-majority flag; loaded and global provider counts; profile and RUN-count
  buckets; and two nuisance buckets.
- `context_mask`, uint8, shape `N x 8`: active contexts.
- `query_features`, int16, shape `N x 28 x 14`: requester and context IDs;
  anonymous ABI, symbol, scope-shape, and lookup-role codes; lazy-majority hint;
  root/direct lookup mode; direct provider or sentinel 19; loaded/global counts;
  relation hint; and two nuisance buckets.
- `query_mask`, uint8, shape `N x 28`: active target queries.
- `candidate_features`, int16, shape `N x 28 x 8 x 14`: provider ID; anonymous
  ABI, symbol, export-binding, visibility, scope-mode, and provider-role codes;
  actual load rank plus one; direct-handle flag; binary-profile hint; anonymous
  scope checksum; lazy-load flag; and two nuisance buckets. Export visibility
  and global scope are family-coded rather than direct Boolean answer fields.
- `candidate_mask`, uint8, shape `N x 28 x 8`: providers loaded in each target
  context.
- `support_query_features`, int16, shape `N x 24 x 14`: query records for 24
  controlled native lookups.
- `support_candidate_features`, int16, shape `N x 24 x 8 x 14`: provider records
  for those support lookups.
- `support_candidate_mask`, uint8, shape `N x 24 x 8`: active support providers.
- `support_choice`, int8, shape `N x 24`: observed support slot 0 through 7, or
  value 8 for unresolved.
- `probe_trace`, float32, shape `N x 24 x 256 x 8`: family-permuted event raster.
  Before permutation, channels represent event type, global/local scope,
  now/lazy mode, handle/provider identity, queried symbol, resolution status,
  winning provider, and normalized measured duration.
- `family_index`, int16, shape `N`: anonymous captured family index.

Training additionally contains:

- `binding_target`, int8, shape `N x 28`: target slot 0 through 7 or unresolved
  value 8.
- `scope_target`, uint8, shape `N x 20`: target scope-root mask.
- `deferred_target`, uint8, shape `N x 28`: target lazy-provider mask.
- `candidate_behavior`, uint8, shape `N x 28 x 9 x 16`: behavior bits for eight
  candidates plus unresolved. Bits encode exports across six symbols, scope,
  lazy state, early load rank, export kind, root/direct wins, and any-symbol win.
- `program_target`, int16, shape `N x 49`: training-only auxiliary sketch with
  25 summaries of captured native outcomes and 24 case-level
  anonymization-codebook values.
- `case_weight`, float32, shape `N`: deterministic training case weight.

## Required Ledger

Submit a CSV with exactly two columns:

- `case_id`: one test ID, exactly once.
- `ledger_json`: one JSON object with exactly the keys `bindings`,
  `scope_roots`, and `deferred`.

The binding grammar is `Qdd=Cdd` or `Qdd=U`, where `dd` is a two-digit local
index. Every active query must occur exactly once. Scope roots use `Mdd`.
Deferred entries use `Qdd`. Lists must contain strings and no duplicates.

A minimal two-query object is:

`{"bindings":["Q00=C02","Q01=U"],"scope_roots":["M02"],"deferred":["Q01"]}`

Row order does not matter. Unknown IDs, unavailable candidates, duplicate IDs,
missing or extra test IDs, malformed JSON, missing assignments, extra object
keys, and unexpected CSV columns are rejected with a clear error.

## Evaluation

The metric is Chance-Corrected Binding Ledger Utility. Higher is better. Every
component is in the interval from 0 to 1, and a perfect ledger scores exactly 1.

Define:

`Gain(raw, chance) = clip((raw - chance) / (1 - chance), 0, 1)`

### 1. BindingGain, weight 0.46

For query `q`, let `k_q` be its active candidate count. Raw binding accuracy is
the mean exact candidate-or-unresolved accuracy. Uniform chance for that query
is `1 / (k_q + 1)`. BindingGain applies `Gain` to mean raw accuracy and mean
uniform chance.

### 2. BehaviorGain, weight 0.22

Every candidate choice has a private 16-bit behavior vector derived from the
captured workflow. Raw behavior similarity is the fraction of bits shared by
the submitted and true choices, averaged over active queries. Chance similarity
is the mean obtained by enumerating all valid candidates plus unresolved for
each query. BehaviorGain applies `Gain` to those two means. Test behavior
vectors are private.

### 3. CoalescenceGain, weight 0.12

Submitted candidate slots are mapped to provider modules. Queries are
partitioned by provider, with unresolved queries sharing one label.
CoalescenceGain is Adjusted Rand Index between submitted and true partitions,
clipped to the interval from 0 to 1. Adjusted Rand Index already corrects for
random agreement.

### 4. ScopeGain, weight 0.10

Let `p` be submitted-root count, `t` true-root count, and `u` active-module
count. Raw score is set F1. For nonempty sets, expected random intersection is
`p * t / u`, so chance F1 is `2 * p * t / (u * (p + t))`. ScopeGain applies
`Gain` to raw and chance F1. Two empty sets score 1.

### 5. DeferredGain, weight 0.07

DeferredGain uses the same chance-corrected set-F1 definition as ScopeGain,
with active queries as the universe.

### 6. ExactLedger, weight 0.03

ExactLedger is 1 only when every binding, scope root, and deferred query is
correct; otherwise it is 0.

The per-case score is:

`case_score = 0.46 * BindingGain + 0.22 * BehaviorGain + 0.12 * CoalescenceGain + 0.10 * ScopeGain + 0.07 * DeferredGain + 0.03 * ExactLedger`

The weights sum to 1.00. BindingGain is the dominant component; exact matching
is a final standard rather than the dominant source of credit.

### Case Weights and Leaderboard Score

Define `native_outcome_diversity` as the number of distinct observed root
outcomes, including unresolved, across the eight selected contexts and six
symbols, divided by 9. It lies between `1/9` and 1.

For a case:

`difficulty = (query_count / 28 + module_count / 20 + native_outcome_diversity + unresolved_fraction) / 4`

`case_weight = 0.75 + 0.75 * difficulty`

Weights are fixed before grading and remain private for test cases. The final
leaderboard score is:

`score = sum(case_weight * case_score) / sum(case_weight)`

## Difficulty Landmarks

All release 2.0 landmarks below were measured on the frozen 40-family private
split with the official grader:

- Valid unresolved ledger: 0.0722.
- Fixed first-candidate policy: 0.0568.
- Surface compatibility heuristic: 0.0979.
- Exact support-condition transfer: 0.0718.
- CPU multi-task learned reference: 0.3308.
- Perfect ledger: 1.0000.

The learned reference exceeds the surface heuristic by 0.2329 while leaving
0.6692 absolute score above it. The intended progression is validity and
masking, relational candidate encoding, support-conditioned codebook recovery,
dependency-graph induction, position-sensitive native-event modeling,
calibrated unresolved decisions, and joint scope/deferred consistency.

## Why From Scratch Is Feasible

There are 3,200 top-level training cases, but each case is a dense structured
training bundle rather than one label. Training exposes:

- 76,800 observed support executions.
- 81,575 active target binding decisions.
- 734,175 candidate behavior vectors.
- Up to 64,000 module scope labels.
- 81,575 deferred-load labels.
- 3,200 multi-output native-program audit sketches.
- 160 disjoint training workflow families spanning 200 selected linker-profile
  families in the full release.

This supplies hundreds of thousands of supervised local decisions while still
requiring family-level generalization. Numeric tensors and compact event rasters
allow an embedding/MLP, recurrent, convolutional, or attention model to train
from random initialization on CPU within the runtime budget. No language model
or pretrained code representation is necessary.

## From Scratch and Runtime Rules

- CPU only: 10 CPU cores and 62 GB RAM.
- Hard execution limit: 90 minutes.
- The submitted model must be trained from random initialization during the
  single solution run.
- No pretrained model, embedding, encoder, checkpoint, distillation target,
  saved test prediction, external dataset, internet, or remote service.
- No TF-IDF, n-gram lookup, nearest-target retrieval, training-ledger copying,
  frequency-table submission, or hand-authored rule-only solver.
- Do not create extra synthetic training examples.
- Do not fit or adapt shared parameters jointly across public test cases.
  Within-case use of that case's 24 support experiments is allowed.
- Read only from `./dataset/public/` and write
  `./working/submission.csv`.

The category is From Scratch because the intended solution is a learned model
trained only on the supplied training partition, while its data source is a
real controlled plugin/linker execution workflow.
