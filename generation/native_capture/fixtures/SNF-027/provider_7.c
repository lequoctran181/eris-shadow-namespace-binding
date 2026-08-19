/* Controlled native-loader fixture.
 * Family: SNF-027; provider: 7; profile: lld/test/ELF/gnu-hash-table.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 439; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 28070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 28071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 28072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 28074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 28075; }
