/* Controlled native-loader fixture.
 * Family: SNF-045; provider: 6; profile: lld/test/ELF/bp-section-orderer.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 726; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 46061; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 46063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 46064; }
