/* Controlled native-loader fixture.
 * Family: SNF-151; provider: 5; profile: lld/test/ELF/retain-symbols-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2421; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 152050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 152051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 152052; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 152055; }
