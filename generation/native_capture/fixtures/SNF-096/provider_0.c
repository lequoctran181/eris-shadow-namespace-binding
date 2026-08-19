/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 0; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1536; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 97000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 97001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 97002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 97003; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 97005; }
