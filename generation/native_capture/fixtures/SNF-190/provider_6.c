/* Controlled native-loader fixture.
 * Family: SNF-190; provider: 6; profile: lld/test/ELF/linkerscript/synthetic-symbols3.test
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3046; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 191060; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 191064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 191065; }
