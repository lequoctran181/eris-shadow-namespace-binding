/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 3; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2835; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 178030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 178031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 178032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 178033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 178034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 178035; }
