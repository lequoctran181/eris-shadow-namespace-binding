/* Controlled native-loader fixture.
 * Family: SNF-037; provider: 5; profile: lld/test/ELF/trace-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 597; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 38050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 38051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 38052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 38053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 38055; }
