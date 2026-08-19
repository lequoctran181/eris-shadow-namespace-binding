/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 6; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2694; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 169060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 169061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 169062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 169063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 169064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 169065; }
