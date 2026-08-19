/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 2; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1522; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 96020; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 96022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 96024; }
