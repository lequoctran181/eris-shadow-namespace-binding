/* Controlled native-loader fixture.
 * Family: SNF-151; provider: 7; profile: lld/test/ELF/retain-symbols-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2423; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 152070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 152071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 152072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 152074; }
