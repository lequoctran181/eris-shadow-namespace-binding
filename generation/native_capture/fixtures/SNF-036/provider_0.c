/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 0; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 576; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 37000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 37001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 37002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 37003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 37004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 37005; }
