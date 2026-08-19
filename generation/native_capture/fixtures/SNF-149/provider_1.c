/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 1; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2385; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 150012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 150013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 150014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 150015; }
