/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 0; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1888; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 119000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 119001; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 119003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 119004; }
