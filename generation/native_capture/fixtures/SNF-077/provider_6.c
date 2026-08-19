/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 6; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1238; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 78060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 78061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 78062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 78063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 78064; }
