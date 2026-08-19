/* Controlled native-loader fixture.
 * Family: SNF-070; provider: 2; profile: lld/test/ELF/aarch64-adrp-ldr-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1122; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 71020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 71021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 71022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 71023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 71024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 71025; }
