/* Controlled native-loader fixture.
 * Family: SNF-100; provider: 4; profile: lld/test/ELF/linkerscript/orphan.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1604; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 101040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 101041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 101042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 101043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 101045; }
