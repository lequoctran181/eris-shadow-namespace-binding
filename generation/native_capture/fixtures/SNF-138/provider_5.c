/* Controlled native-loader fixture.
 * Family: SNF-138; provider: 5; profile: lld/test/ELF/linkerscript/memory.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2213; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 139051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 139052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 139053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 139055; }
