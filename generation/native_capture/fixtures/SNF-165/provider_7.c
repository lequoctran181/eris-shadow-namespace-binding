/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 7; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2647; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 166070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 166071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 166072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 166073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 166074; }
