/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 2; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2850; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 179023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 179024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 179025; }
