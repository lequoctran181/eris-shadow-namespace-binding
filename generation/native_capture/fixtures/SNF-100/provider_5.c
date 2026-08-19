/* Controlled native-loader fixture.
 * Family: SNF-100; provider: 5; profile: lld/test/ELF/linkerscript/orphan.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1605; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 101050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 101052; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 101055; }
