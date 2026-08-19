/* Controlled native-loader fixture.
 * Family: SNF-129; provider: 6; profile: lld/test/ELF/dynamic-list-preempt2.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 130061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 130062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 130063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 130064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 130065; }
