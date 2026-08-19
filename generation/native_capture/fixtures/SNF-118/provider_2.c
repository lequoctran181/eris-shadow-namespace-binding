/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 2; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1890; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 119020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 119021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 119022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 119023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 119024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 119025; }
