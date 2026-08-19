/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 1; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3089; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 194010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 194011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 194012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194014; }
