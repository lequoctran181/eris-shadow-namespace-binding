/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 2; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 962; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 61020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 61021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 61022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 61023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 61024; }
