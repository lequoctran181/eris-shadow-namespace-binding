/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 5; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2821; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 177051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 177052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 177054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 177055; }
