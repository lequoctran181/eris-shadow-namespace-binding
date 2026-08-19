/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 3; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3011; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 189030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 189031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 189032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 189033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 189034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 189035; }
