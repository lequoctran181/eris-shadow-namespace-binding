/* Controlled native-loader fixture.
 * Family: SNF-113; provider: 7; profile: lld/test/ELF/aarch64-thunk-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1815; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 114070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 114071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 114072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 114073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 114074; }
