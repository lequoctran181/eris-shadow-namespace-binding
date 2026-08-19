/* Controlled native-loader fixture.
 * Family: SNF-099; provider: 5; profile: lld/test/ELF/sparcv9-tls-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1589; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 100052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 100053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 100054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 100055; }
