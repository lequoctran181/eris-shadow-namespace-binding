/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 7; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2471; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 155070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 155071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 155072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 155073; }
