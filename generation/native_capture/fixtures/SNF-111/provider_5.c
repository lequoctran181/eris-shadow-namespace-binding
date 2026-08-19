/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 5; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1781; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 112051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 112052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 112053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 112054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 112055; }
