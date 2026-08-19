/* Controlled native-loader fixture.
 * Family: SNF-186; provider: 5; profile: lld/test/ELF/lto/duplicated-name.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2981; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 187051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 187052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 187053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 187054; }
