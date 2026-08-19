/* Controlled native-loader fixture.
 * Family: SNF-124; provider: 1; profile: lld/test/ELF/gc-sections-no-undef-error.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1985; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 125010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 125011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 125012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 125013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 125014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 125015; }
