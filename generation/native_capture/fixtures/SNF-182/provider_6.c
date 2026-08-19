/* Controlled native-loader fixture.
 * Family: SNF-182; provider: 6; profile: lld/test/ELF/emulation-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2918; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 183062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 183063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 183064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 183065; }
