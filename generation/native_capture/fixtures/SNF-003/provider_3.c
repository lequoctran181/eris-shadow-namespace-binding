/* Controlled native-loader fixture.
 * Family: SNF-003; provider: 3; profile: lld/test/ELF/push-state.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 51; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 4030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 4031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 4033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 4034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 4035; }
