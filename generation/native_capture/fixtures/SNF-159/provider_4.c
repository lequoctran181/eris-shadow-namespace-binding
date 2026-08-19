/* Controlled native-loader fixture.
 * Family: SNF-159; provider: 4; profile: lld/test/ELF/systemz-gotent-relax.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2548; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 160040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 160041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 160043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 160044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 160045; }
