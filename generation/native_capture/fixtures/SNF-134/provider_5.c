/* Controlled native-loader fixture.
 * Family: SNF-134; provider: 5; profile: lld/test/ELF/visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2149; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 135050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 135051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 135052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 135053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 135054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 135055; }
