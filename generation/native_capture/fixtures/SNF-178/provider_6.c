/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 6; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2854; }
extern int snb_anchor_0(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 179061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 179062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 179063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 179064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 179065; }
