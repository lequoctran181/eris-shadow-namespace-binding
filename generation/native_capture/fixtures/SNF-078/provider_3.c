/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 3; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1251; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 79030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 79032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 79033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 79034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 79035; }
