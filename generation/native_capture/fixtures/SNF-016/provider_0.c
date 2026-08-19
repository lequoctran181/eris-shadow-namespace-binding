/* Controlled native-loader fixture.
 * Family: SNF-016; provider: 0; profile: lld/test/ELF/undef-suggest-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 256; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 17000; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 17002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 17003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 17004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 17005; }
