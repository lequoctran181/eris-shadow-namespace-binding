/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 4; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 276; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 18040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 18041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 18042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 18043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 18044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 18045; }
