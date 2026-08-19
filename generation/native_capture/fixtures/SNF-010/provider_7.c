/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 7; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 167; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 11070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 11071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 11072; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 11074; }
