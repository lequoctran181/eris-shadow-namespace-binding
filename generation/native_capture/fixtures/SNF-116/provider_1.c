/* Controlled native-loader fixture.
 * Family: SNF-116; provider: 1; profile: lld/test/ELF/lto/comdat2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1857; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 117010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 117011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 117013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 117014; }
