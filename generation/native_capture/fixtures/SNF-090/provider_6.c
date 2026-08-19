/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 6; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1446; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 91060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 91062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 91063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 91064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 91065; }
