/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 6; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3030; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 190060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 190062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 190063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 190064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 190065; }
