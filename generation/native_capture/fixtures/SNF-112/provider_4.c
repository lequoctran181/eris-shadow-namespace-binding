/* Controlled native-loader fixture.
 * Family: SNF-112; provider: 4; profile: lld/test/ELF/ppc64-abi-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1796; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 113040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 113041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 113042; }
