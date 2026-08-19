/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 6; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3142; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 197060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 197062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 197063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 197064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 197065; }
