/* Controlled native-loader fixture.
 * Family: SNF-112; provider: 6; profile: lld/test/ELF/ppc64-abi-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1798; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 113060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 113061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 113062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 113063; }
