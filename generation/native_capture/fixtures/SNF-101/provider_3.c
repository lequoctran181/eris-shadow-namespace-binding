/* Controlled native-loader fixture.
 * Family: SNF-101; provider: 3; profile: lld/test/ELF/aarch64-gnu-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1619; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 102030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 102032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 102033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 102034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 102035; }
