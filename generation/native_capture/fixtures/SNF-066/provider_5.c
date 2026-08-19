/* Controlled native-loader fixture.
 * Family: SNF-066; provider: 5; profile: lld/test/ELF/gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1061; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 67050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 67051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 67052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 67053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 67054; }
