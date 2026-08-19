/* Controlled native-loader fixture.
 * Family: SNF-161; provider: 3; profile: lld/test/ELF/lto/devirt_vcall_vis_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2579; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 162030; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 162033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 162034; }
