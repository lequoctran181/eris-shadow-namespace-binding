/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 1; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 865; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 55010; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 55013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 55014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 55015; }
