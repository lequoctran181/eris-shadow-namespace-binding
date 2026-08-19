/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 1; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1937; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 122010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 122011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 122012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 122013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 122014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 122015; }
