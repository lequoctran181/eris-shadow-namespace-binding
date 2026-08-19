/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 1; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1297; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 82010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 82011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 82012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 82013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 82014; }
