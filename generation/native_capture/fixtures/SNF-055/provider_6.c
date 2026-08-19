/* Controlled native-loader fixture.
 * Family: SNF-055; provider: 6; profile: lld/test/ELF/lto/thinlto-index-only.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 886; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 56061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 56063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 56064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 56065; }
