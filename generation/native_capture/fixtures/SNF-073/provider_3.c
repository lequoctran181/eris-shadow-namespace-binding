/* Controlled native-loader fixture.
 * Family: SNF-073; provider: 3; profile: lld/test/ELF/tls.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1171; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 74030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 74032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 74033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 74034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 74035; }
