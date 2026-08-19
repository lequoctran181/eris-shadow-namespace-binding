/* Controlled native-loader fixture.
 * Family: SNF-086; provider: 5; profile: lld/test/ELF/linkerscript/multiple-tbss.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1381; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 87050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 87051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 87052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 87053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 87054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 87055; }
