/* Controlled native-loader fixture.
 * Family: SNF-138; provider: 1; profile: lld/test/ELF/linkerscript/memory.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2209; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 139010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 139011; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 139014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 139015; }
