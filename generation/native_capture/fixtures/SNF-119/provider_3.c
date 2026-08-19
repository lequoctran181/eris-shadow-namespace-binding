/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 3; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1907; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 120030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 120031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 120032; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120035; }
