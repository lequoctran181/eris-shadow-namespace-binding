/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 7; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1543; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 97070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 97072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 97073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 97074; }
