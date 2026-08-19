/* Controlled native-loader fixture.
 * Family: SNF-175; provider: 5; profile: lld/test/ELF/wrap-dynamic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2805; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 176050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 176051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 176052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 176053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 176054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 176055; }
