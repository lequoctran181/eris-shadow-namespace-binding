/* Controlled native-loader fixture.
 * Family: SNF-101; provider: 4; profile: lld/test/ELF/aarch64-gnu-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1620; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 102041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 102042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 102043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 102044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 102045; }
