/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 6; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2838; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 178060; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 178062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 178063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 178064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 178065; }
