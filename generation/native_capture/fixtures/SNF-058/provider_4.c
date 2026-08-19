/* Controlled native-loader fixture.
 * Family: SNF-058; provider: 4; profile: lld/test/ELF/hexagon-tls-gd-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 932; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 59040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 59041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 59042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 59043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 59044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 59045; }
