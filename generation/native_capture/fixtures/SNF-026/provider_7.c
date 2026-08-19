/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 7; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 423; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 27070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 27071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 27072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 27073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 27075; }
