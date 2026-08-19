/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 7; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1911; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 120071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 120072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 120073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 120074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120075; }
