/* Controlled native-loader fixture.
 * Family: SNF-002; provider: 6; profile: lld/test/ELF/lto/devirt_vcall_vis_export_dynamic.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 38; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 3060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 3061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 3062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 3063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 3064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 3065; }
