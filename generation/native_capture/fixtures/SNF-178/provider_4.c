/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 4; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2852; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 179040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 179041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 179042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 179043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 179044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 179045; }
