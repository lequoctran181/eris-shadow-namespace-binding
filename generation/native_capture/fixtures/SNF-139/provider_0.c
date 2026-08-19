/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 0; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2224; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 140000; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 140003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 140004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 140005; }
