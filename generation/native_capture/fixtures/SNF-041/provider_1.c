/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 1; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 657; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 42010; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 42012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 42013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 42014; }
