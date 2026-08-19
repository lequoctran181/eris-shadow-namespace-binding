/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 1; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1441; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 91011; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 91013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 91014; }
