/* Controlled native-loader fixture.
 * Family: SNF-049; provider: 2; profile: lld/test/ELF/lto/lazy-debug.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 786; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 50021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 50022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 50023; }
