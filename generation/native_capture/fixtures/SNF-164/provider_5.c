/* Controlled native-loader fixture.
 * Family: SNF-164; provider: 5; profile: lld/test/ELF/x86-64-relax-jump-tables.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2629; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 165050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 165051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 165052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 165053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 165054; }
