/* Controlled native-loader fixture.
 * Family: SNF-182; provider: 4; profile: lld/test/ELF/emulation-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2916; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 183040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 183041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 183042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 183043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 183044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 183045; }
