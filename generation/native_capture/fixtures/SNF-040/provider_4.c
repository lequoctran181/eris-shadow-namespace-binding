/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 4; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 644; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 41040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 41041; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 41044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 41045; }
