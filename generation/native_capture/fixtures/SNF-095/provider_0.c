/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 0; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1520; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 96001; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 96002; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 96004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 96005; }
