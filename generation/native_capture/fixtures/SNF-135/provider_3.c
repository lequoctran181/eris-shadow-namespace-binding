/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 3; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2163; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 136030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 136031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 136033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 136034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 136035; }
