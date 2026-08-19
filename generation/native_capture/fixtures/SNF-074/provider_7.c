/* Controlled native-loader fixture.
 * Family: SNF-074; provider: 7; profile: lld/test/ELF/wrap.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1191; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 75071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 75072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 75073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 75074; }
