/* Controlled native-loader fixture.
 * Family: SNF-171; provider: 7; profile: lld/test/ELF/mips-got-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2743; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 172070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 172071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 172073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 172075; }
