/* Controlled native-loader fixture.
 * Family: SNF-156; provider: 5; profile: lld/test/ELF/lto/resolution.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2501; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 157050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 157051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 157053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 157054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 157055; }
