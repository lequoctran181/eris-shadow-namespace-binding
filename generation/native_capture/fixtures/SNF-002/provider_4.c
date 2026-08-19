/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 4; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 36; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 3040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 3041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 3043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 3044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 3045; }
