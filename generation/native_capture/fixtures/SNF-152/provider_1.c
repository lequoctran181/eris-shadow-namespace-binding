/* Controlled native-loader fixture.
 * Family: SNF-152; provider: 1; profile: lld/test/ELF/unresolved-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2433; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 153010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 153011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 153012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 153014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 153015; }
