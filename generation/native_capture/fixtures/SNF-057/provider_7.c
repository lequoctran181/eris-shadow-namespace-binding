/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 7; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 919; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 58070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 58071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 58072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 58073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 58074; }
