/* Controlled native-loader fixture.
 * Family: SNF-020; provider: 7; profile: lld/test/ELF/shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 327; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 21070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 21071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 21072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 21073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 21074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 21075; }
