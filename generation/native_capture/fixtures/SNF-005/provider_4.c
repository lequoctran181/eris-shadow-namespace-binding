/* Controlled native-loader fixture.
 * Family: SNF-005; provider: 4; profile: lld/test/ELF/relro-non-contiguous.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 84; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 6040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 6041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 6043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 6044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 6045; }
