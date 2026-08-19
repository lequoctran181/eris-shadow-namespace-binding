/* Controlled native-loader fixture.
 * Family: SNF-159; provider: 5; profile: lld/test/ELF/systemz-gotent-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2549; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 160050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 160051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 160053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 160054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 160055; }
