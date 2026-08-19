/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 3; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1011; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 64030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 64031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 64032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 64034; }
