/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 6; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 134; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 9061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 9062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 9063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 9064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 9065; }
