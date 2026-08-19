/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 5; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1685; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 106050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 106051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 106052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 106053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 106054; }
