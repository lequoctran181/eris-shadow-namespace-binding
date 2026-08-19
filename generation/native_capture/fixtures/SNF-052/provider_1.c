/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 1; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 833; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 53010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 53011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 53012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 53013; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 53015; }
