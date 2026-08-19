/* Controlled native-loader fixture.
 * Family: SNF-112; provider: 5; profile: lld/test/ELF/ppc64-abi-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1797; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 113050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 113051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 113052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 113053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 113054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 113055; }
