/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 5; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3093; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 194051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 194052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 194053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194054; }
