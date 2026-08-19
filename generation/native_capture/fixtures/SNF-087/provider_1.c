/* Controlled native-loader fixture.
 * Family: SNF-087; provider: 1; profile: lld/test/ELF/arm-cmse-diagnostics.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1393; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 88010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 88011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 88012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 88013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 88015; }
