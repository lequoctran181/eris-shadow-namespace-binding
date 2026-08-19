/* Controlled native-loader fixture.
 * Family: SNF-170; provider: 2; profile: lld/test/ELF/debug-dead-reloc-32.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2722; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 171020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 171021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 171022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 171023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 171024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 171025; }
