/* Controlled native-loader fixture.
 * Family: SNF-194; provider: 1; profile: lld/test/ELF/ppc64-bsymbolic-toc-restore.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3105; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 195010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 195011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 195012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 195013; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 195015; }
