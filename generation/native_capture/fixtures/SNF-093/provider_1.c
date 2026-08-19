/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 1; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1489; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 94010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 94011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 94012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 94013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 94014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 94015; }
