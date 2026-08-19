/* Controlled native-loader fixture.
 * Family: SNF-161; provider: 4; profile: lld/test/ELF/lto/devirt_vcall_vis_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2580; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 162040; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 162043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 162044; }
