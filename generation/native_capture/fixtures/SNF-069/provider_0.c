/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 0; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1104; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 70000; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 70002; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 70005; }
