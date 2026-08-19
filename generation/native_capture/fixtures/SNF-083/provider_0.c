/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 0; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1328; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 84000; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 84002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 84003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 84004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 84005; }
