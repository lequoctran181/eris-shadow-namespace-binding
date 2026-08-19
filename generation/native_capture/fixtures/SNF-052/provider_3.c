/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 3; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 835; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 53031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 53032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 53033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 53034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 53035; }
