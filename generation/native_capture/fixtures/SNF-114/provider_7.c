/* Controlled native-loader fixture.
 * Family: SNF-114; provider: 7; profile: lld/test/ELF/dt_flags.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1831; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 115070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 115072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 115073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 115074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 115075; }
