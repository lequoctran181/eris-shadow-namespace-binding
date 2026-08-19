/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 0; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1008; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 64000; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 64003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 64004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 64005; }
