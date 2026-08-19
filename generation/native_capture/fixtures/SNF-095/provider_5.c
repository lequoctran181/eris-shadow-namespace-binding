/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 5; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1525; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 96050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 96052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 96053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 96054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 96055; }
