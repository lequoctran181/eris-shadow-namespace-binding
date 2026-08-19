/* Controlled native-loader fixture.
 * Family: SNF-018; provider: 1; profile: lld/test/ELF/gc-sections-print.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 289; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 19011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 19012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 19013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 19014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 19015; }
