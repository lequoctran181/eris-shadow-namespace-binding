/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 0; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 832; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 53000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 53001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 53002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 53003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 53004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 53005; }
