/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 7; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 759; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 48070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 48072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 48073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 48074; }
