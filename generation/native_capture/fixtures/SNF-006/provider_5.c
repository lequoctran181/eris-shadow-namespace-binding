/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 5; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 101; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 7050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 7051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 7053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 7054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 7055; }
