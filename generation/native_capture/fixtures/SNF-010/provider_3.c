/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 3; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 163; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 11031; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 11034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 11035; }
