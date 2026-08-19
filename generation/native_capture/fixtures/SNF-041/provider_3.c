/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 3; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 659; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 42031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 42032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 42033; }
