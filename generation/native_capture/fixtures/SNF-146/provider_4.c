/* Controlled native-loader fixture.
 * Family: SNF-146; provider: 4; profile: lld/test/ELF/arm-tls-norelax-gd-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2340; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 147040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 147041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 147042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 147043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 147044; }
