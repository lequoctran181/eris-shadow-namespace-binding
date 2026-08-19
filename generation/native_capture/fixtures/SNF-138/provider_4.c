/* Controlled native-loader fixture.
 * Family: SNF-138; provider: 4; profile: lld/test/ELF/linkerscript/memory.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2212; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 139041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 139042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 139043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 139044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 139045; }
