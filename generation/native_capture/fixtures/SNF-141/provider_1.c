/* Controlled native-loader fixture.
 * Family: SNF-141; provider: 1; profile: lld/test/ELF/gnu-ifunc-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2257; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 142010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 142011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 142012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 142013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 142014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 142015; }
