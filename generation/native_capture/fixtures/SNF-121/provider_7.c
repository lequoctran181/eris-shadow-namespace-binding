/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 7; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1943; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 122070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 122071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 122072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 122073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 122075; }
