/* Controlled native-loader fixture.
 * Family: SNF-190; provider: 3; profile: lld/test/ELF/linkerscript/synthetic-symbols3.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3043; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 191030; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 191034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 191035; }
