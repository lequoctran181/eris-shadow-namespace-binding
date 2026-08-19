/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 1; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1105; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 70010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 70011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 70012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 70013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 70014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 70015; }
