/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 0; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2944; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 185001; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 185003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 185004; }
