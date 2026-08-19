/* Controlled native-loader fixture.
 * Family: SNF-010; provider: 4; profile: lld/test/ELF/aarch64-variant_pcs.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 164; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 11040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 11042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 11043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 11044; }
