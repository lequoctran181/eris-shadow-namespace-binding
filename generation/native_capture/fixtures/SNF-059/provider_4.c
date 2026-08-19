/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 4; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 948; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 60042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 60043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 60044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 60045; }
