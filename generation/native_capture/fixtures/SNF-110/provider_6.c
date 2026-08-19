/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 6; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1766; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 111060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 111061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 111062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 111063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 111064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 111065; }
