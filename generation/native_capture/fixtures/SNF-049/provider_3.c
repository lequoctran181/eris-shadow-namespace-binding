/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 3; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 787; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 50031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 50032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 50033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 50034; }
