# Reference Solution

Entry point:

`python3 solution.py <public_dir> <submission_out>`

The reference uses only NumPy, pandas, and PyTorch on CPU. All parameters start
from seed `20260805` and are trained during the run.

## Architecture

1. Masked module and context pooling.
2. Per-support representations containing the support query, selected provider,
   candidate-pool mean, selected-minus-pool contrast, outcome slot, and trace
   summaries.
3. A position-sensitive 1D convolutional encoder over the mean event probe.
4. Train-only auxiliary recovery of the 49-value native-outcome and case-codebook
   sketch.
5. Query-conditioned attention over the 24 support experiments, with an
   equality bias for shared condition fields.
6. Relational candidate scoring using requester, partial dependency evidence,
   provider, context, inferred codebook, and equality features.
7. Separate learned heads for deferred imports and scope roots, with soft
   provider-count feedback from the binding head.

The solution does not use the private behavior target and is intentionally not
a ceiling. Its frozen private score is 0.330771, with a measured end-to-end CPU
runtime of 45.17 seconds on the capture workstation.
