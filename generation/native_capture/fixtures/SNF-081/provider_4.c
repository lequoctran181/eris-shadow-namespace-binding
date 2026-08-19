/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 4; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1300; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 82042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 82043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 82044; }
