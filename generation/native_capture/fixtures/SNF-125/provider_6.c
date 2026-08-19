/* Controlled native-loader fixture.
 * Family: SNF-125; provider: 6; profile: lld/test/ELF/hexagon-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2006; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 126060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 126061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 126063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 126064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 126065; }
