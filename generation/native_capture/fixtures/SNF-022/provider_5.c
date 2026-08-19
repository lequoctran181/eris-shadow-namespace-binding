/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 5; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 357; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 23050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 23051; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 23055; }
