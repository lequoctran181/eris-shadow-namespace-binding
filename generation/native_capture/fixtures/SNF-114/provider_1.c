/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 1; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1825; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 115013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 115014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 115015; }
