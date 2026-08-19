/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 6; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 86; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 6060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 6061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 6063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 6064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 6065; }
