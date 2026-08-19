/* Controlled native-loader fixture.
 * Family: SNF-045; provider: 7; profile: lld/test/ELF/bp-section-orderer.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 727; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 46070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 46071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 46072; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 46074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 46075; }
