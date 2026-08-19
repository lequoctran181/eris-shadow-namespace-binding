/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 5; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1157; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 73050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 73051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 73052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 73053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 73054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 73055; }
