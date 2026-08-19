/* Controlled native-loader fixture.
 * Family: SNF-058; provider: 7; profile: lld/test/ELF/hexagon-tls-gd-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 935; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 59070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 59071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 59073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 59075; }
