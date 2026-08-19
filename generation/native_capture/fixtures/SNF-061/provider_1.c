/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 1; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 977; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 62011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 62012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 62013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 62014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 62015; }
