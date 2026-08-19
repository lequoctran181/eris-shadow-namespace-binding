/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 5; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1253; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 79053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 79054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 79055; }
