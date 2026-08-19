/* Controlled native-loader fixture.
 * Family: SNF-160; provider: 3; profile: lld/test/ELF/startstop.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2563; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 161030; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 161033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 161034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 161035; }
