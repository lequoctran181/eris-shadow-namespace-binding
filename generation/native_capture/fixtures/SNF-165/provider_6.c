/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 6; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2646; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 166060; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 166062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 166063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 166064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 166065; }
