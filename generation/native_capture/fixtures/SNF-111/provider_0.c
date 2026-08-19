/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 0; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1776; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 112000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 112001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 112002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 112003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 112004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 112005; }
