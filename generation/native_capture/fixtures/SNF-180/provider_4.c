/* Controlled native-loader fixture.
 * Family: SNF-180; provider: 4; profile: lld/test/ELF/lto/libcall-archive-bitcode.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2884; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 181040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 181041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 181042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 181043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 181044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 181045; }
