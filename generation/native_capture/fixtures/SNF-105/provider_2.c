/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 2; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1682; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 106020; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 106022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 106023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 106025; }
