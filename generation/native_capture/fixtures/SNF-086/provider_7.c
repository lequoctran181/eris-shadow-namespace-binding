/* Controlled native-loader fixture.
 * Family: SNF-086; provider: 7; profile: lld/test/ELF/linkerscript/multiple-tbss.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1383; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 87070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 87071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 87072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 87073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 87074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 87075; }
