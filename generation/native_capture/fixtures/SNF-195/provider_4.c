/* Controlled native-loader fixture.
 * Family: SNF-195; provider: 4; profile: lld/test/ELF/loongarch-relax-tlsdesc.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3124; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 196040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 196041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 196042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 196043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 196044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 196045; }
