/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 7; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1111; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 70070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 70071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 70073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 70074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 70075; }
