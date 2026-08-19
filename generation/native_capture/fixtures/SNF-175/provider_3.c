/* Controlled native-loader fixture.
 * Family: SNF-175; provider: 3; profile: lld/test/ELF/wrap-dynamic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2803; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 176030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 176032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 176033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 176034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 176035; }
