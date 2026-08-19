/* Controlled native-loader fixture.
 * Family: SNF-065; provider: 6; profile: lld/test/ELF/wrap-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1046; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 66060; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 66063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 66065; }
