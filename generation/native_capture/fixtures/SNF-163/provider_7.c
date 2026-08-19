/* Controlled native-loader fixture.
 * Family: SNF-163; provider: 7; profile: lld/test/ELF/incompatible.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2615; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 164070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 164072; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 164075; }
