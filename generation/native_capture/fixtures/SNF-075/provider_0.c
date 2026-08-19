/* Controlled native-loader fixture.
 * Family: SNF-075; provider: 0; profile: lld/test/ELF/warn-backrefs.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1200; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 76000; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 76002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 76003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 76004; }
