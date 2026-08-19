/* Controlled native-loader fixture.
 * Family: SNF-020; provider: 5; profile: lld/test/ELF/shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 325; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 21050; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 21052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 21053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 21055; }
