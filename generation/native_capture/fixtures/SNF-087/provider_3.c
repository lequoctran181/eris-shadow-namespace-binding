/* Controlled native-loader fixture.
 * Family: SNF-087; provider: 3; profile: lld/test/ELF/arm-cmse-diagnostics.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1395; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 88030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 88031; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 88033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 88034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 88035; }
