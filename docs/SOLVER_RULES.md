# Solver Rules

1. Train all learned parameters from random initialization in the submitted run.
2. Use CPU only, at most 10 cores and 62 GB RAM.
3. Finish within 90 minutes; solutions should target 60 minutes or less.
4. Use only files under the prepared public dataset directory.
5. Do not use pretrained weights, embeddings, tokenizers with learned assets,
   external data, network calls, remote services, or cached predictions.
6. Do not use retrieval, nearest-target copying, TF-IDF, n-gram or Markov
   lookup, frequency-table submission, distillation, or a hand-authored
   rule-only solver.
7. Do not generate extra synthetic training examples.
8. Do not fit or update shared parameters across test cases. Within-case support
   experiments may be processed with their own query case.
9. Respect every mask and local-ID universe.
10. Write only the requested submission file with `case_id,ledger_json`.

Required entry point:

`python3 solution.py <public_dir> <submission_out>`
