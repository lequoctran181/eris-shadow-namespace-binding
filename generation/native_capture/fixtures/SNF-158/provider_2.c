/* Controlled native-loader fixture.
 * Family: SNF-158; provider: 2; profile: lld/test/ELF/weak-shared-gc.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2530; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 159020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 159021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 159022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 159023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 159024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 159025; }
