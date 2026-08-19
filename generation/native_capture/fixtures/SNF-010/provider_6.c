/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 6; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 166; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 11062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 11063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 11064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 11065; }
