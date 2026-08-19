/* Controlled native-loader fixture.
 * Family: SNF-100; provider: 1; profile: lld/test/ELF/linkerscript/orphan.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1601; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 101010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 101011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 101012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 101013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 101014; }
