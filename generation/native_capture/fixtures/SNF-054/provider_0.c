/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 0; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 864; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 55000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 55001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 55002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 55003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 55004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 55005; }
