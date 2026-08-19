/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 7; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 87; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 6070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 6071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 6072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 6073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 6074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 6075; }
