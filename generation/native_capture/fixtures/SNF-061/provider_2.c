/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 2; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 978; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 62020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 62022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 62023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 62024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 62025; }
