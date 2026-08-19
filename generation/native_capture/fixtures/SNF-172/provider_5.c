/* Controlled native-loader fixture.
 * Family: SNF-172; provider: 5; profile: lld/test/ELF/map-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2757; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 173051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 173053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 173055; }
