/* Controlled native-loader fixture.
 * Family: SNF-023; provider: 5; profile: lld/test/ELF/riscv-attributes.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 373; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 24051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 24052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 24054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 24055; }
