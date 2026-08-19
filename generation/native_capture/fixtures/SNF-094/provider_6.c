/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 6; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1510; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 95060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 95061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 95062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 95063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 95064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 95065; }
