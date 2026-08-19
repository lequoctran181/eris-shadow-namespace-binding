# Revision Copy/Paste Blocks

## Source URL

```text
https://github.com/llvm/llvm-project/tree/9a793fd6d5ebd40bccd5d718c33f0a9dc29839c7/lld/test/ELF
```

## Dataset Attribution

```text
Primary observations were collected specifically for this benchmark by compiling 1,600 newly authored inert Mach-O plugin libraries with Apple Clang and executing 3,200 isolated macOS dlopen/dlsym workflows. The frozen release contains 198,400 measured load/lookup events, provider outcomes, failures, timings, source and binary hashes, and Mach-O UUIDs. Fixture semantics are grounded in 200 diverse LLVM lld regression tests pinned at commit 9a793fd6d5ebd40bccd5d718c33f0a9dc29839c7; selected paths and hashes are included for audit. Newly collected records, fixture sources, tensors, schemas, and original documentation are CC BY 4.0. Bundled LLVM source excerpts retain Apache-2.0 WITH LLVM-exception as documented in LICENSE.md and LLVM_LICENSE.txt. No production plugin, user telemetry, credentials, personal data, pretrained feature, or third-party answer label is included.
```

## From Scratch Justification

```text
The release has 3,200 top-level training cases from 160 disjoint native workflow families, but each case is a dense structured training bundle. Training exposes 76,800 observed support executions, 81,575 target binding decisions, 734,175 candidate behavior vectors, up to 64,000 module-scope labels, 81,575 deferred-load labels, and 3,200 multi-output audit sketches. This provides hundreds of thousands of local supervised decisions while preserving 40 completely held-out test families. The supplied CPU reference trains all parameters from random initialization in 45.17 seconds, so the task is demonstrably learnable within the 90-minute CPU limit without pretrained assets.
```

## Reviewer Response

```text
Thanks; I addressed both points with a dataset rebuild rather than a prose-only change. Release 2.0 removes the fictional resolver as the label source. It compiles 1,600 Mach-O plugins in 200 profile-grounded dependency DAGs, runs 3,200 isolated dlopen/dlsym workflows, and freezes 198,400 native events. Raw-only lineage maps replay every support and target label against the captured outcome matrix, while prepare.py removes all provenance mappings from public data.

I also expanded training from 1,536 to 3,200 cases across 160 disjoint workflow families. Those cases contain 76,800 support executions, 81,575 binding labels, and 734,175 behavior vectors, which is the effective from-scratch supervision. Targets are exact-disjoint from support and audit-enriched for dependency-mediated or shadowed outcomes; exact support transfer scores 0.0718, surface rules 0.0979, and the learned CPU reference 0.3308. I uploaded the replacement dataset and reran Prepare to produce 3,200 train and 800 test rows.
```

## Fields That Must Be Replaced

```text
Dataset Description: replace with raw/DATASET_DESCRIPTION.md
Dataset Data Files: replace with raw_shadow_namespace_binding_ledger_dataset.zip
Dataset Source URL: use the Source URL block above
Dataset License and Source: use the Dataset Attribution block above
Challenge Problem Description: replace with docs/PROBLEM_DESCRIPTION.md
Challenge prepare.py: replace with challenge/prepare.py, then click Run Prepare
Grading Script: unchanged
Challenge title, category, metric, bounds, and CPU settings: unchanged
```
