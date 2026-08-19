# Novelty and Negative Retrieval Log

Research date: 2026-08-05

## Proposed Benchmark Claim

The benchmark asks a from-scratch model to infer an unordered cross-namespace
runtime binding ledger from module graphs, controlled support resolutions, and
native loader-event rasters. Each held-out family changes the compiled export
layout, dependency DAG, load plans, and observed outcome matrix; each case also
uses fresh anonymous codebooks. Evaluation combines chance-corrected binding,
private behavioral response, provider coalescence, scope, deferral, and exact
ledger agreement.

## Surfaces Searched

- arXiv and general scholarly search
- Papers With Code
- Kaggle datasets and competitions
- GitHub repositories and benchmark descriptions
- Hugging Face datasets
- GNU, glibc, Android, and ABI primary documentation

## Exact and Targeted Queries

- `machine learning benchmark dynamic linker symbol binding inference ELF`
- `dataset symbol interposition resolution ELF machine learning`
- `benchmark reconstruct dynamic linking decisions stripped binaries`
- `dynamic linker binding inference`
- `symbol binding partial observations loader`
- `symbol resolution machine learning ELF benchmark`
- `site:kaggle.com dynamic linker dataset symbol binding`
- `site:huggingface.co/datasets ELF symbol resolution`
- `site:github.com symbol binding benchmark ELF dataset`
- `site:paperswithcode.com dynamic linker symbol resolution`
- `cross namespace loader binding ledger benchmark`
- `latent loader precedence program induction dataset`

## Nearest Located Work

1. REBENCH evaluates stripped-binary type and name recovery. It does not infer
   runtime provider bindings, namespace scopes, hidden load programs, or
   counterfactual probe behavior. Source:
   https://arxiv.org/abs/2604.27319
2. DEBIN predicts symbol names, types, and locations removed from binaries. It
   does not model dynamic binding ledgers or controlled load experiments.
   Source: https://www.sri.inf.ethz.ch/publications/he18debin
3. LibDB identifies third-party libraries and versions in binaries. It does not
   resolve per-import providers under latent namespace semantics. Source:
   https://arxiv.org/abs/2204.10232
4. Android's linker relocation benchmark measures relocation performance; it
   is not a learned inverse task or dataset. Source:
   https://android.googlesource.com/platform/bionic/+/HEAD/benchmarks/linker_relocation/
5. LLVM `lld` regression tests and Apple's dynamic-library documentation define
   real linker and loader workflows. They are the benchmark's grounding sources,
   not comparable ML competitions. Sources:
   https://github.com/llvm/llvm-project/tree/9a793fd6d5ebd40bccd5d718c33f0a9dc29839c7/lld/test/ELF
   and
   https://developer.apple.com/library/archive/documentation/DeveloperTools/Conceptual/DynamicLibraries/100-Articles/DynamicLibraryUsageGuidelines.html

## Boundary

No exact or close benchmark was located on the searched surfaces. Existing
binary-learning work centers on names, types, source reconstruction, library
identity, malware properties, or decompilation. Existing linker benchmarks
measure implementation behavior or speed. This benchmark's joint object - a
family-disjoint native plugin workflow, partial dependency evidence, case-level
anonymization, within-case support executions, private behavior signatures,
and structured binding/scope/deferral ledger - was not found.

This is a documented negative search, not a claim that every private or
unindexed work has been examined.
