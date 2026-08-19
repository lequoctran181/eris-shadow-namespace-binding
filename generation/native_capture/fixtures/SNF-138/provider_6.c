/* Controlled native-loader fixture.
 * Family: SNF-138; provider: 6; profile: lld/test/ELF/linkerscript/memory.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2214; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 139060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 139062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 139063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 139064; }
