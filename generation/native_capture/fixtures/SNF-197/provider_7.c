/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 7; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3159; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 198071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 198072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 198073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 198074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 198075; }
