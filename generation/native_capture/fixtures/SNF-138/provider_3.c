/* Controlled native-loader fixture.
 * Family: SNF-138; provider: 3; profile: lld/test/ELF/linkerscript/memory.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2211; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 139030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 139031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 139032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 139033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 139034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 139035; }
