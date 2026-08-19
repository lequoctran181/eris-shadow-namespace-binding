/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 7; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1079; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 68070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 68071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 68072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 68073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 68074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 68075; }
