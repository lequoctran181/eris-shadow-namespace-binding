/* Controlled native-loader fixture.
 * Family: SNF-173; provider: 2; profile: lld/test/ELF/debug-dead-reloc-tls-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2770; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 174020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 174021; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 174023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 174024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 174025; }
