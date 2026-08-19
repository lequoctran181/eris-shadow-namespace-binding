/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 3; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2691; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 169030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 169031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 169032; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 169035; }
