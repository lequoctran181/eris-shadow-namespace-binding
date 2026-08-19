/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 5; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1829; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 115051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 115052; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 115055; }
