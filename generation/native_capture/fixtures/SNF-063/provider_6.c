/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 6; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1014; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 64060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 64061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 64062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 64063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 64064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 64065; }
