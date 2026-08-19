/* Controlled native-loader fixture.
 * Family: SNF-195; provider: 5; profile: lld/test/ELF/loongarch-relax-tlsdesc.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3125; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 196050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 196051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 196052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 196053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 196054; }
