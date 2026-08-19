/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 7; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 391; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 25071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 25073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 25074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 25075; }
