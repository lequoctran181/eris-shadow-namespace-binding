/* Controlled native-loader fixture.
 * Family: SNF-017; provider: 3; profile: lld/test/ELF/verneed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 275; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 18031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 18032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 18033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 18034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 18035; }
