/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 6; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1078; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 68061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 68062; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 68064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 68065; }
