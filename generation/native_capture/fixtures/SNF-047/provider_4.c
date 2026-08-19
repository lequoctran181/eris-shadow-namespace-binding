/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 4; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 756; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 48040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 48041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 48043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 48044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 48045; }
