/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 3; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2531; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 159030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 159031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 159033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 159034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 159035; }
