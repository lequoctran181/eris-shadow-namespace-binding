/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 0; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 640; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 41000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 41001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 41002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 41003; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 41005; }
