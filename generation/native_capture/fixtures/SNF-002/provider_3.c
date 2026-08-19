/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 3; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 35; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 3033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 3034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 3035; }
