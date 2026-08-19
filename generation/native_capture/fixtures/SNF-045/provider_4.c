/* Controlled native-loader fixture.
 * Family: SNF-045; provider: 4; profile: lld/test/ELF/bp-section-orderer.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 724; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 46040; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 46043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 46044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 46045; }
