/* Controlled native-loader fixture.
 * Family: SNF-104; provider: 6; profile: lld/test/ELF/as-needed-no-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1670; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 105061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 105062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 105064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 105065; }
