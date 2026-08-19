/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 0; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 32; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 3000; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 3002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 3003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 3004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 3005; }
