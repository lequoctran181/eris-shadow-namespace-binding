/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 2; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1634; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 103021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 103022; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 103024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 103025; }
