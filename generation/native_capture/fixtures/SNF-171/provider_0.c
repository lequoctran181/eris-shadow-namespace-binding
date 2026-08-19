/* Controlled native-loader fixture.
 * Family: SNF-171; provider: 0; profile: lld/test/ELF/mips-got-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2736; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 172000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 172001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 172002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 172003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 172004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 172005; }
