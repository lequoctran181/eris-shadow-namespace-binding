/* Controlled native-loader fixture.
 * Family: SNF-164; provider: 1; profile: lld/test/ELF/x86-64-relax-jump-tables.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2625; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 165012; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 165015; }
