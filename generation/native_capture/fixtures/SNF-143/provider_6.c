/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 6; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2294; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 144060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 144061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 144063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 144064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 144065; }
