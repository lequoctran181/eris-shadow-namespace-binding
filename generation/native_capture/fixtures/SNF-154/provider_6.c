/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 6; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2470; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 155061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 155062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 155064; }
