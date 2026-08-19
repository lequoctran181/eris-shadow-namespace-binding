/* Controlled native-loader fixture.
 * Family: SNF-170; provider: 3; profile: lld/test/ELF/debug-dead-reloc-32.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2723; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 171030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 171031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 171033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 171034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 171035; }
