/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 6; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 742; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 47061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 47062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 47063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 47064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 47065; }
