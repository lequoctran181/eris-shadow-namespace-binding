/* Controlled native-loader fixture.
 * Family: SNF-115; provider: 6; profile: lld/test/ELF/mips-tls-64-pic-local-variable.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1846; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 116060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 116061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 116062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 116063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 116064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 116065; }
