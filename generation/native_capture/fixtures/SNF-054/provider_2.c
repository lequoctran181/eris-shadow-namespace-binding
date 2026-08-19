/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 2; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 866; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 55020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 55021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 55022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 55023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 55024; }
