# Shadow Namespace Binding Ledger Induction

From Scratch, CPU-only Diamond Challenge workspace built on controlled native
plugin/linker executions.

## Primary Deliverables

- `upload/raw_shadow_namespace_binding_ledger_dataset.zip`: raw dataset upload.
- `upload/shadow_namespace_binding_challenge_bundle.zip`: scripts, reference,
  rubrics, QA, and form guide.
- `raw/CAPTURE_PROTOCOL.md`: native collection and leakage controls.
- `docs/SHIPD_FORM_GUIDE.md`: field-by-field Shipd instructions.
- `docs/PROBLEM_DESCRIPTION.md`: final challenge description.
- `challenge/prepare.py`: deterministic public/private preparation.
- `challenge/grade.py`: official chance-corrected grader.
- `reference/solution.py`: CPU model trained from random initialization.

Release 2.0 contains 4,000 cases from 200 native workflow families. Training
and test are disjoint by fixture family and upstream linker profile. Final
difficulty landmarks and integrity checks are recorded in `docs/QA_REPORT.md`.

Frozen private landmarks are 0.0722 for a valid unresolved ledger, 0.0979 for
the surface heuristic, 0.3308 for the learned CPU reference, and 1.0000 for the
exact native ledger.
