/* Controlled native-loader fixture.
 * Family: SNF-089; provider: 7; profile: lld/test/ELF/verneed-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1431; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 90070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 90071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 90072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 90073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 90074; }
