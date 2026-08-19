/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 2; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1330; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 84020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 84021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 84022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 84023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 84024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 84025; }
