/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 7; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2167; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 136070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 136071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 136072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 136073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 136075; }
