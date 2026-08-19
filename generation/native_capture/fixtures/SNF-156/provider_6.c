/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 6; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2502; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 157060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 157061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 157063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 157064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 157065; }
