/* Controlled native-loader fixture.
 * Family: SNF-145; provider: 7; profile: lld/test/ELF/linkerscript/map-file.test
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2327; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 146071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 146072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 146073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 146074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 146075; }
