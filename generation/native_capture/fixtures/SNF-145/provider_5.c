/* Controlled native-loader fixture.
 * Family: SNF-145; provider: 5; profile: lld/test/ELF/linkerscript/map-file.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2325; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 146050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 146051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 146052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 146053; }
