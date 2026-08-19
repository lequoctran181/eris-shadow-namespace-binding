/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 4; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1716; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 108041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 108042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 108043; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 108045; }
