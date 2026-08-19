/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 6; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 246; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 16061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 16063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 16064; }
