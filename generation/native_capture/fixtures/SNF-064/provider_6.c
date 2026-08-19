/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 6; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1030; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 65061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 65062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 65063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 65064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 65065; }
