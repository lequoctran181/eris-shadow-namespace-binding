/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 7; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3031; }
extern int snb_anchor_1(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 190070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 190071; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 190074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 190075; }
