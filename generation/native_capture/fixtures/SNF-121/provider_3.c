/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 3; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1939; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 122030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 122031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 122033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 122034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 122035; }
