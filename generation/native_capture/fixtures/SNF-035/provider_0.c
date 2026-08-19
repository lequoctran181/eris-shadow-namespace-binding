/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 0; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 560; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 36000; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 36004; }
