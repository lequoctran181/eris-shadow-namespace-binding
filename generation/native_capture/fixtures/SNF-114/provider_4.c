/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 4; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1828; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 115040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 115041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 115042; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 115044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 115045; }
