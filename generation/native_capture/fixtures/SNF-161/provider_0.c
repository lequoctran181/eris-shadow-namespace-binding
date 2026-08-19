/* Controlled native-loader fixture.
 * Family: SNF-161; provider: 0; profile: lld/test/ELF/lto/devirt_vcall_vis_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2576; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 162001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 162002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 162003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 162004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 162005; }
