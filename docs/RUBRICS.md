# Evaluation Rubrics

1. REQUIRED - The solution reads only the supplied public directory and writes
   the requested submission path.
2. REQUIRED - All learned parameters are initialized and trained during the
   run; no pretrained or externally learned artifact is used.
3. REQUIRED - The implementation is CPU-only and respects the 90-minute hard
   limit on 10 cores and 62 GB RAM.
4. REQUIRED - Module, context, query, and candidate masks are applied so padded
   rows cannot affect learning or output.
5. REQUIRED - Validation is family-disjoint; rows from one `family_id` do not
   appear in both fitting and validation folds.
6. REQUIRED - Every active query receives exactly one valid local candidate or
   `U`; unavailable candidate slots are never emitted.
7. REQUIRED - The submission contains exactly `case_id` and `ledger_json`, all
   test IDs exactly once, and the exact three-key JSON grammar.
8. REQUIRED - No external data, network access, pretrained representation,
   retrieval, nearest-target copying, synthetic augmentation, or shared
   test-time adaptation is used.
9. RECOMMENDED - The model encodes candidate providers relative to requester,
   context, and module-graph features rather than treating slots as global
   classes.
10. RECOMMENDED - The 24 support outcomes are represented as structured
    within-case evidence and conditioned on each target query.
11. RECOMMENDED - Probe traces are modeled with a position-sensitive learned
    encoder rather than only global means.
12. RECOMMENDED - `program_target` is used as train-only auxiliary supervision;
    test program sketches are inferred from public evidence.
13. RECOMMENDED - Unresolved decisions are calibrated as a learned veto outcome,
    not inferred only from an empty or weak candidate pool.
14. RECOMMENDED - Scope roots and deferred queries are learned or reconciled
    jointly with selected bindings.
15. RECOMMENDED - Model selection considers the official chance-corrected
    components and case weights, not raw slot accuracy alone.
16. OPTIONAL - Multiple random seeds or family folds are used to estimate
    variance before a final full-data fit.
