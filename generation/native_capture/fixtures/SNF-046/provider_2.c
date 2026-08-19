/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 2; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 738; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 47021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 47022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 47024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 47025; }
