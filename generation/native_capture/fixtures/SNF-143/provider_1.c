/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 1; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2289; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 144010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 144011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 144013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 144014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 144015; }
