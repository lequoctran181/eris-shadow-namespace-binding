/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 2; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 34; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 3020; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 3022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 3023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 3024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 3025; }
