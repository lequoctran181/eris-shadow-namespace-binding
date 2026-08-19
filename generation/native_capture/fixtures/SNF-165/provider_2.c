/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 2; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2642; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 166020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 166021; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 166025; }
