/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 1; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 945; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 60011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 60012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 60013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 60014; }
