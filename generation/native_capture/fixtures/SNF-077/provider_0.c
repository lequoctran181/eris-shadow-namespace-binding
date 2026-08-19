/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 0; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1232; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 78001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 78002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 78003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 78004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 78005; }
