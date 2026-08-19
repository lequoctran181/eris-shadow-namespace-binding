/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 4; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2164; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 136040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 136041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 136042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 136043; }
