/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 4; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1348; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 85041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 85042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 85043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 85044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 85045; }
