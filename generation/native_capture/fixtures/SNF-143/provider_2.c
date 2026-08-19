/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 2; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2290; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 144020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 144022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 144023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 144025; }
