/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 4; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 132; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 9040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 9041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 9042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 9043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 9044; }
