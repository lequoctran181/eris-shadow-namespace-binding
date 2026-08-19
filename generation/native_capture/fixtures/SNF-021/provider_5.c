/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 5; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 341; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 22050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 22051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 22052; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 22055; }
