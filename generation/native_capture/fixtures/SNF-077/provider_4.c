/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 4; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1236; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 78040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 78041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 78043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 78044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 78045; }
