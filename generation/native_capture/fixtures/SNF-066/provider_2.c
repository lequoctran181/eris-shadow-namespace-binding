/* Controlled native-loader fixture.
 * Family: SNF-066; provider: 2; profile: lld/test/ELF/gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1058; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 67020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 67021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 67022; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 67024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 67025; }
