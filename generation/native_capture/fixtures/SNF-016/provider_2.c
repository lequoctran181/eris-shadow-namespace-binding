/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 2; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 258; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 17020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 17021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 17022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 17023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 17024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 17025; }
