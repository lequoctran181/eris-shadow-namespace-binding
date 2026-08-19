/* Controlled native-loader fixture.
 * Family: SNF-032; provider: 4; profile: lld/test/ELF/local-symbols-order.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 516; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 33040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 33041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 33043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 33044; }
