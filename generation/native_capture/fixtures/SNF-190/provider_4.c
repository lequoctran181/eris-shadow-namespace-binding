/* Controlled native-loader fixture.
 * Family: SNF-190; provider: 4; profile: lld/test/ELF/linkerscript/synthetic-symbols3.test
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3044; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 191040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 191042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 191043; }
