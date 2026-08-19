# Huong Dan Revision Shipd - Shadow Namespace Binding Ledger Induction

## A. Cap Nhat Dataset

### 1. Title

`Shadow Namespace Binding Ledger Dataset`

Giu nguyen title nay.

### 2. Description

Thay toan bo Description cu bang noi dung file:

`raw/DATASET_DESCRIPTION.md`

Khong de lai bat ky cau nao noi dataset la fully synthetic hoac duoc tao boi
Shadow Namespace Loader Simulator 1.0.

### 3. Data Files / Source Files

Xoa ZIP cu va upload ban moi:

`raw_shadow_namespace_binding_ledger_dataset.zip`

ZIP khong co parent folder. `binding_worlds_full.npz`, `cases_full.csv`,
`native_trace_events.jsonl.gz`, `workflow_profiles.csv`, `README.md`, va cac
file con lai phai nam ngay o archive root.

### 4. License

Chon `CC BY 4.0`.

Dataset records, fixture sources, tensors, schemas, va original documentation
la CC BY 4.0. Hai tram LLVM source excerpts giu Apache-2.0 WITH
LLVM-exception; allocation duoc ghi ro trong `LICENSE.md` va
`LLVM_LICENSE.txt`.

### 5. Source URL

Dan mot URL sau:

`https://github.com/llvm/llvm-project/tree/9a793fd6d5ebd40bccd5d718c33f0a9dc29839c7/lld/test/ELF`

### 6. License and Source / Attribution

Dan nguyen block trong muc `Dataset Attribution` cua file
`docs/REVISION_BLOCKS.md`.

### 7. Dataset Validation

Description phai noi ro day la controlled native-execution data. Nguon quan sat
la 1,600 Mach-O plugins chay qua 3,200 isolated dyld workers, khong phai
production telemetry va khong phai resolver simulator.

## B. Cap Nhat Challenge

### 8. Challenge Type va Category

- Challenge type: `Diamond Challenge`
- Category: `From Scratch`
- Difficulty: `Hard`
- Compute: `CPU only`
- CPU: `10 cores`
- RAM: `62 GB`
- Time limit: `90 minutes`

### 9. Challenge Title

`Shadow Namespace Binding Ledger Induction`

Giu nguyen title.

### 10. Problem Description

Thay toan bo description cu bang:

`docs/PROBLEM_DESCRIPTION.md`

Ban moi phai co cac heading Data Origin and Experimental Grounding, Split and
Anonymization, Why From Scratch Is Feasible, va cac landmark release 2.0.

### 11. Grading

Khong doi metric hay grader:

- Direction: `Maximize`
- Min: `0`
- Max: `1`
- Metric: `Chance-Corrected Binding Ledger Utility`
- Grading script: `challenge/grade.py`

### 12. prepare.py

Thay prepare.py cu bang toan bo file:

`challenge/prepare.py`

Sau do bat buoc bam `Run Prepare` lai. Output dung:

- Public `train.npz`: 3,200 rows
- Public `test.npz`: 800 rows
- `train_cases.csv`: 3,200 rows
- `test_cases.csv`: 800 rows
- `sample_submission.csv`: 800 rows
- Private `answers.csv`: 800 rows
- Train families: 160
- Test families: 40
- Family overlap: 0

Public manifests khong duoc co cac cot `capture_profile_id`, upstream hashes,
native context maps, condition maps, hoac `target_hard_fraction`.

### 13. Reference va Rules

- Reference script: `reference/solution.py`
- Reference notebook: `notebooks/solution.ipynb`
- Rubrics: `docs/RUBRICS.md`
- Solver rules: `docs/SOLVER_RULES.md`

Entry point:

`python3 solution.py <public_dir> <submission_out>`

## C. Validation Bat Buoc

### 14. Dataset Checks

- Raw cases: 4,000
- Raw NPZ: 756,058,796 bytes
- Native events: 198,400
- Dependency edges: 1,552
- Training support executions: 76,800
- Training target decisions: 81,575
- Mean hard-target fraction: 98.75 percent

### 15. Difficulty Checks

- Unresolved: 0.072160
- First candidate: 0.056772
- Surface: 0.097921
- Exact support transfer: 0.071765
- Learned CPU reference: 0.330771
- Perfect: 1.000000

Reference-minus-surface gap la 0.23271, bang 19.16 family-clustered standard
errors. Neu agent runs thuong xuyen vuot 0.35, dung lai va audit agent bundle
truoc khi submit.

### 16. Reviewer Response

Dan block `Reviewer Response` trong `docs/REVISION_BLOCKS.md` sau khi dataset
revision da upload va `Run Prepare` da thanh cong. Khong gui response truoc khi
he thong dang hien 3,200/800 rows.

## D. Final Checklist

- Dataset ZIP v2 da upload
- Dataset Description v2 da dan
- Source URL pinned LLVM da dien
- Attribution moi da dan
- Dataset da Accepted/Ready
- Problem Description v2 da dan
- prepare.py v2 da dan
- Run Prepare da bam lai
- 3,200 train va 800 test rows hien dung
- 160/40 families, overlap 0
- Public test khong co target/provenance mapping
- Grader giu nguyen
- Validation checks da rerun tren prepared version moi
- Reviewer response chi gui sau cac buoc tren
