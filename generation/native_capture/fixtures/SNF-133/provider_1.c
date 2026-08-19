/* Controlled native-loader fixture.
 * Family: SNF-133; provider: 1; profile: lld/test/ELF/aarch64-pauth-rela-iplt-end.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2129; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 134011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 134012; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 134014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 134015; }
