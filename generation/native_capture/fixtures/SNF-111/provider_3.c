/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 3; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1779; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 112030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 112031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 112032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 112033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 112034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 112035; }
