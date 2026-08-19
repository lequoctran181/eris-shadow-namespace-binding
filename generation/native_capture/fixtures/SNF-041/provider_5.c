/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 5; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 661; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 42050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 42051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 42052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 42053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 42054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 42055; }
