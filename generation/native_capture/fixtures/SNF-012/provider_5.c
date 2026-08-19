/* Controlled native-loader fixture.
 * Family: SNF-012; provider: 5; profile: lld/test/ELF/startstop-visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 197; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 13050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 13052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 13053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 13054; }
