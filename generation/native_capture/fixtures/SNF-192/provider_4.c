/* Controlled native-loader fixture.
 * Family: SNF-192; provider: 4; profile: lld/test/ELF/aarch64-gnu-ifunc-nonpreemptable2.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3076; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 193040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 193041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 193042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 193043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 193044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 193045; }
