/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 7; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2535; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 159070; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 159072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 159073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 159074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 159075; }
