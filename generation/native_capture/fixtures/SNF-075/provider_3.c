/* Controlled native-loader fixture.
 * Family: SNF-075; provider: 3; profile: lld/test/ELF/warn-backrefs.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1203; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 76030; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 76034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 76035; }
