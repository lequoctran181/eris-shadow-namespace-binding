/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 7; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1031; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 65070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 65072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 65073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 65074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 65075; }
