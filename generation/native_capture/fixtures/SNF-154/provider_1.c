/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 1; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2465; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 155010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 155011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 155012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 155013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 155014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 155015; }
