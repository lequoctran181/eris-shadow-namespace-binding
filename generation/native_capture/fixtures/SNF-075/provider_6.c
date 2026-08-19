/* Controlled native-loader fixture.
 * Family: SNF-075; provider: 6; profile: lld/test/ELF/warn-backrefs.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1206; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 76060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 76061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 76062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 76064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 76065; }
