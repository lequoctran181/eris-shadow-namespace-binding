/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 1; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 417; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 27011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 27012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 27013; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 27015; }
