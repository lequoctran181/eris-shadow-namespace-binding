/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 3; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2467; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 155031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 155032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 155033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 155034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 155035; }
