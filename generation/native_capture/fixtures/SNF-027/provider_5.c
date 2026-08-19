/* Controlled native-loader fixture.
 * Family: SNF-027; provider: 5; profile: lld/test/ELF/gnu-hash-table.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 437; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 28050; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 28053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 28054; }
