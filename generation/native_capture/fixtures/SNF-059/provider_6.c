/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 6; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 950; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 60060; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 60063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 60065; }
