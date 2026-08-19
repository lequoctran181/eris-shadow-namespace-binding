/* Controlled native-loader fixture.
 * Family: SNF-122; provider: 4; profile: lld/test/ELF/debug-names-type-units.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1956; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 123040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 123041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 123042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 123043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 123044; }
