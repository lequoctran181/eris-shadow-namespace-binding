/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 1; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2833; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 178010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 178011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 178012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 178013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 178015; }
