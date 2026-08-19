/* Controlled native-loader fixture.
 * Family: SNF-161; provider: 1; profile: lld/test/ELF/lto/devirt_vcall_vis_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2577; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 162011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 162012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 162014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 162015; }
