/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 5; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 69; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 5050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 5051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 5052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 5053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 5054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 5055; }
