/* Controlled native-loader fixture.
 * Family: SNF-075; provider: 7; profile: lld/test/ELF/warn-backrefs.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1207; }
extern int snb_anchor_1(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 76070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 76071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 76072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 76073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 76074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 76075; }
