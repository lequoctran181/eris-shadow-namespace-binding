/* Controlled native-loader fixture.
 * Family: SNF-076; provider: 6; profile: lld/test/ELF/linkerscript/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1222; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 77060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 77062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 77063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 77064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 77065; }
