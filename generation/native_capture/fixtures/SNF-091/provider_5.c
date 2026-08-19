/* Controlled native-loader fixture.
 * Family: SNF-091; provider: 5; profile: lld/test/ELF/as-needed.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1461; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 92051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 92052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 92053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 92054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 92055; }
