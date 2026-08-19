/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 3; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 867; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 55030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 55031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 55032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 55034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 55035; }
