/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 7; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2855; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 179070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 179071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 179072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 179073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 179074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 179075; }
