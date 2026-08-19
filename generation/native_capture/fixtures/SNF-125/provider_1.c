/* Controlled native-loader fixture.
 * Family: SNF-125; provider: 1; profile: lld/test/ELF/hexagon-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2001; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 126010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 126011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 126012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 126013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 126014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 126015; }
