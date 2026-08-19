/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 3; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 243; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 16031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 16032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 16033; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 16035; }
