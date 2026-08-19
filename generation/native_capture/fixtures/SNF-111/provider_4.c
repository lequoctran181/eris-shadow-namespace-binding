/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 4; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1780; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 112040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 112041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 112042; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 112044; }
