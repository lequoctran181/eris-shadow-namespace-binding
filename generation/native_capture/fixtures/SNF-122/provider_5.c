/* Controlled native-loader fixture.
 * Family: SNF-122; provider: 5; profile: lld/test/ELF/debug-names-type-units.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1957; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 123050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 123051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 123052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 123053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 123054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 123055; }
