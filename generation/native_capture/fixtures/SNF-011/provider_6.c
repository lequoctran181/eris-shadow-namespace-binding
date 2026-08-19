/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 6; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 182; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 12060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 12061; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 12064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 12065; }
