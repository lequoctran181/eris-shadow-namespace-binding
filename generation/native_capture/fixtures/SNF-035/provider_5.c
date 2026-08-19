/* Controlled native-loader fixture.
 * Family: SNF-035; provider: 5; profile: lld/test/ELF/shlib-undefined-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 565; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 36050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 36051; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 36053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 36054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 36055; }
