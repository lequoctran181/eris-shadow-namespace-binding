/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 1; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 33; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 3010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 3011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 3012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 3014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 3015; }
