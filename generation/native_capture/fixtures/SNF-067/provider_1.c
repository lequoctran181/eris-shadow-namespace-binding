/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 1; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1073; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 68010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 68011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 68013; }
