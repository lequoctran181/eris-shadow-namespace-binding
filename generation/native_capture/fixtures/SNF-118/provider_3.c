/* Controlled native-loader fixture.
 * Family: SNF-118; provider: 3; profile: lld/test/ELF/weak-undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1891; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 119030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 119032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 119033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 119034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 119035; }
