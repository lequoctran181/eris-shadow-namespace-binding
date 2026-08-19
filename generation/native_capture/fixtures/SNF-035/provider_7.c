/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 7; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 567; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 36070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 36071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 36072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 36073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 36074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 36075; }
