/* Controlled native-loader fixture.
 * Family: SNF-125; provider: 5; profile: lld/test/ELF/hexagon-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2005; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 126050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 126051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 126053; }
