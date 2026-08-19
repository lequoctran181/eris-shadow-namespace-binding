/* Controlled native-loader fixture.
 * Family: SNF-040; provider: 1; profile: lld/test/ELF/wrap-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 641; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 41010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 41011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 41012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 41013; }
