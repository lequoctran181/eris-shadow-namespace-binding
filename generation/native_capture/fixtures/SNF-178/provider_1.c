/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 1; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2849; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 179011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 179012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 179013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 179014; }
