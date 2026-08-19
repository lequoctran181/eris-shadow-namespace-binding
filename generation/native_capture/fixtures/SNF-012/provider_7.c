/* Controlled native-loader fixture.
 * Family: SNF-012; provider: 7; profile: lld/test/ELF/startstop-visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 199; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 13070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 13072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 13073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 13074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 13075; }
