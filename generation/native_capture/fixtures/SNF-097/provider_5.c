/* Controlled native-loader fixture.
 * Family: SNF-097; provider: 5; profile: lld/test/ELF/dynamic-list.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1557; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 98050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 98051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 98053; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 98055; }
