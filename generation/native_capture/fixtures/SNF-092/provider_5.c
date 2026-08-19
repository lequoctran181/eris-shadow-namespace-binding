/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 5; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1477; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 93050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 93051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 93052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 93053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 93054; }
