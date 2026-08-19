/* Controlled native-loader fixture.
 * Family: SNF-179; provider: 4; profile: lld/test/ELF/gdb-index-invalid-section-index.yaml
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2868; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 180040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 180041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 180042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 180043; }
