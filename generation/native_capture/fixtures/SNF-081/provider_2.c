/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 2; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1298; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 82021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 82022; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 82024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 82025; }
