/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 2; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2386; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 150021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 150022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 150023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 150024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 150025; }
