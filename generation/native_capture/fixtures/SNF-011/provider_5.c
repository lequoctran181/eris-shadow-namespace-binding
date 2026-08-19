/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 5; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 181; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 12050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 12051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 12052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 12053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 12054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 12055; }
