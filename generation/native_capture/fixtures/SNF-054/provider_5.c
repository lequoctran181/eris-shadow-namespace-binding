/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 5; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 869; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 55050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 55051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 55052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 55053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 55054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 55055; }
