/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 7; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 39; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 3070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 3071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 3072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 3073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 3074; }
