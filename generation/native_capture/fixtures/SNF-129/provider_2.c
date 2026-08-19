/* Controlled native-loader fixture.
 * Family: SNF-129; provider: 2; profile: lld/test/ELF/dynamic-list-preempt2.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2066; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 130020; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 130022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 130023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 130024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 130025; }
