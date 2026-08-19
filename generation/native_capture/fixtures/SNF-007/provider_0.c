/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 0; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 112; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 8000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 8001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 8002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 8003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 8004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 8005; }
