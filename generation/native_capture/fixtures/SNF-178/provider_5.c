/* Controlled native-loader fixture.
 * Family: SNF-178; provider: 5; profile: lld/test/ELF/x86-64-reloc-pltoff64.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2853; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 179050; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 179053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 179055; }
