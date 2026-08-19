/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 7; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2791; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 175070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 175071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 175072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 175073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 175074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 175075; }
