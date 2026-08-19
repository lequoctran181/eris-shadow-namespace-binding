/* Controlled native-loader fixture.
 * Family: SNF-058; provider: 6; profile: lld/test/ELF/hexagon-tls-gd-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 934; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 59060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 59061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 59062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 59063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 59064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 59065; }
