/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 3; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2819; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 177030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 177031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 177033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 177034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 177035; }
