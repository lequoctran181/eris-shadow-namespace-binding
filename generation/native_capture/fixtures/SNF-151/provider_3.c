/* Controlled native-loader fixture.
 * Family: SNF-151; provider: 3; profile: lld/test/ELF/retain-symbols-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2419; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 152030; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 152032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 152033; }
