/* Controlled native-loader fixture.
 * Family: SNF-120; provider: 5; profile: lld/test/ELF/verneed.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1925; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 121050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 121051; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 121054; }
