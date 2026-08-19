/* Controlled native-loader fixture.
 * Family: SNF-134; provider: 0; profile: lld/test/ELF/visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2144; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 135000; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 135002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 135003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 135004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 135005; }
