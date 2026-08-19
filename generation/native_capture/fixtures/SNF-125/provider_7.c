/* Controlled native-loader fixture.
 * Family: SNF-125; provider: 7; profile: lld/test/ELF/hexagon-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2007; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 126070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 126071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 126072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 126073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 126074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 126075; }
