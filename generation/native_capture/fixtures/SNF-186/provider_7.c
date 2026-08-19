/* Controlled native-loader fixture.
 * Family: SNF-186; provider: 7; profile: lld/test/ELF/lto/duplicated-name.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2983; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 187070; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 187073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 187074; }
