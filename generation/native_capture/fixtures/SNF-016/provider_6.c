/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 6; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 262; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 17061; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 17063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 17064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 17065; }
