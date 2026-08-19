/* Controlled native-loader fixture.
 * Family: SNF-099; provider: 2; profile: lld/test/ELF/sparcv9-tls-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1586; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 100022; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 100024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 100025; }
