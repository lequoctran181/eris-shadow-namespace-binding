/* Controlled native-loader fixture.
 * Family: SNF-051; provider: 7; profile: lld/test/ELF/linkerscript/empty-section-start-stop.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 823; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 52071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 52072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 52073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 52074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 52075; }
