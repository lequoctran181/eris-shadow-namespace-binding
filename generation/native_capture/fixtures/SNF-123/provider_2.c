/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 2; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1970; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 124020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 124022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 124023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 124024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 124025; }
