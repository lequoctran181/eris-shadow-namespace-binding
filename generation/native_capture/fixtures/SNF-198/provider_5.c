/* Controlled native-loader fixture.
 * Family: SNF-198; provider: 5; profile: lld/test/ELF/lto/thinlto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3173; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 199050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 199051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 199052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 199053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 199054; }
