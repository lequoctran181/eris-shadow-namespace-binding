/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 3; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1235; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 78030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 78031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 78032; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 78035; }
