/* Controlled native-loader fixture.
 * Family: SNF-100; provider: 0; profile: lld/test/ELF/linkerscript/orphan.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1600; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 101002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 101003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 101004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 101005; }
