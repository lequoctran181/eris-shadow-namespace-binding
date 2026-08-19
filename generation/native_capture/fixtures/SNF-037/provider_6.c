/* Controlled native-loader fixture.
 * Family: SNF-037; provider: 6; profile: lld/test/ELF/trace-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 598; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 38062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 38064; }
