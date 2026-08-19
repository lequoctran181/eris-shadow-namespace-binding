/* Controlled native-loader fixture.
 * Family: SNF-171; provider: 3; profile: lld/test/ELF/mips-got-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2739; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 172030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 172031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 172032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 172034; }
