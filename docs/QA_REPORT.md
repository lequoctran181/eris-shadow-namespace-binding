# Quality Assurance Report

Dataset version: 2.0.0

Case-construction seed: 20260805

## Native Capture

- Pinned LLVM linker profiles: 200
- Authored and compiled Mach-O libraries: 1,600
- Native dependency edges: 1,552
- Isolated dyld worker processes: 3,200
- Captured load/lookup events: 198,400
- Direct resolved lookups returning a dependency provider: 25.24 percent
- Root lookups not returning the first explicitly global provider: 49.24 percent
- Capture NPZ SHA-256: `6c32cc1f0ee2638b22f71797787b8ca1ac2b26a28534a7dc5e9bc72295f4dd3f`
- Canonical event-log SHA-256: `155a2513c95fdab17bc1a9abc3444884a95beddeb9d18b9c57acd15c96367e53`

## Final Scale

- Raw cases: 4,000
- Workflow families: 200
- Training: 3,200 cases from 160 families
- Test: 800 cases from 40 disjoint families
- Test-to-train ratio: exactly 25 percent
- Raw NPZ size: 756,058,796 bytes
- Support executions per case: 24
- Training support executions: 76,800
- Training target binding labels: 81,575
- Training candidate behavior vectors: 734,175
- Mean target queries per case: 25.48275
- Candidates per active query: 8
- Weighted unresolved rate: 18.90 percent
- Mean audit-hard target fraction: 98.75 percent

## Determinism and Lineage QA

- `prepare.py` was run twice into independent directories.
- All prepared output hashes matched byte for byte.
- Train and test family overlap is zero.
- Public manifests contain no raw capture/profile mapping columns.
- Public test contains no binding, scope, deferred, behavior, program, weight,
  or split target.
- Every support and target label was replayed against `native_capture.npz` using
  raw-only native condition maps.
- Every deferred target was checked against the captured winning provider's
  load mode.
- Every scope target was reconstructed from native winners and selected context
  plans.
- Support and target condition sets are exact-disjoint inside every case.
- Sample, test-manifest, and private-answer IDs match exactly.

## Grader QA

- Perfect submission: 1.000000
- Shuffled perfect submission: 1.000000
- Missing column: rejected
- Missing ID: rejected
- Extra ID: rejected
- Duplicate ID: rejected
- Malformed JSON: rejected
- Missing query assignment: rejected
- Unavailable candidate: rejected

## Difficulty Landmarks

- Valid unresolved ledger: 0.072160
- Fixed first-candidate policy: 0.056772
- Surface compatibility heuristic: 0.097921
- Exact support-condition transfer: 0.071765
- Multi-task CPU learned reference: 0.330771
- Perfect ledger: 1.000000

Across 40 private families, the surface heuristic has mean 0.09818, standard
deviation 0.03219, and family-clustered standard error 0.00509. The reference
has mean 0.33089, standard deviation 0.08933, and standard error 0.01412. The
paired reference-minus-surface gap is 0.23271 with standard error 0.01215, or
19.16 standard errors.

The low baselines occupy 0.057 through 0.098. Learned structured inference
reaches 0.331, and the exact native ledger remains attainable at 1.0. This gives
separate low, intermediate, and open high-skill regions instead of a floor pile
or retrieval plateau.

## Runtime

The final reference trains from random initialization on CPU. Its measured
end-to-end wall time was 45.17 seconds on the capture workstation, including
NPZ loading, feature construction, 20 training epochs, inference, and writing
800 submissions. A second clean run took 45.18 seconds and produced a
byte-identical CSV with SHA-256
`e129dfee27aa95616b0b51f42b7e6e8e144e3b53c403183fae746dfd3517bf87`.
This is well below the 90-minute limit.

## Leakage and Shortcut Audit

- Raw provenance is auditable but omitted from prepared public data.
- Family IDs and upstream linker profiles are disjoint across the split.
- Candidate slots are independently permuted for each query.
- Every target condition is absent from support conditions.
- Exact support transfer scores 0.071765, below the surface baseline.
- Test program sketches, behavior signatures, weights, outcomes, and native
  condition maps are private.
- Target selection favors dependency-mediated, shadowed, or unresolved native
  events and never modifies their measured answers.
- The reference uses no external data, retrieval, pretrained asset, synthetic
  augmentation, rule-only resolver, or cross-test adaptation.

Machine-readable QA and difficulty reports are stored in `qa/qa_results.json`
and `qa/difficulty_report.json`.
