/* Controlled native-loader fixture.
 * Family: SNF-171; provider: 6; profile: lld/test/ELF/mips-got-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2742; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 172061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 172062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 172064; }
