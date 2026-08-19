/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 7; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1159; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 73070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 73071; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 73073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 73074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 73075; }
