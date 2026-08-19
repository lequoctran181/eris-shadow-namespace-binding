/* Controlled native-loader fixture.
 * Family: SNF-051; provider: 4; profile: lld/test/ELF/linkerscript/empty-section-start-stop.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 820; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 52041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 52042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 52043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 52044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 52045; }
