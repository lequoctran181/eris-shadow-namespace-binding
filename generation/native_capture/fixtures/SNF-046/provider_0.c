/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 0; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 736; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 47000; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 47001; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 47003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 47004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 47005; }
