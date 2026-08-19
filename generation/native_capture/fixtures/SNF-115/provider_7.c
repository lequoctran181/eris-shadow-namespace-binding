/* Controlled native-loader fixture.
 * Family: SNF-115; provider: 7; profile: lld/test/ELF/mips-tls-64-pic-local-variable.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1847; }
extern int snb_anchor_3(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 116070; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 116073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 116075; }
