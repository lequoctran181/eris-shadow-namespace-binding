/* Controlled native-loader fixture.
 * Family: SNF-042; provider: 3; profile: lld/test/ELF/why-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 675; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 43030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 43031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 43032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 43033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 43034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 43035; }
