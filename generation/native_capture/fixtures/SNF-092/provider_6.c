/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 6; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1478; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 93060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 93061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 93062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 93063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 93065; }
