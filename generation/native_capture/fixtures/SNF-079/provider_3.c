/* Controlled native-loader fixture.
 * Family: SNF-079; provider: 3; profile: lld/test/ELF/lto/archive.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1267; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 80031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 80032; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 80034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 80035; }
