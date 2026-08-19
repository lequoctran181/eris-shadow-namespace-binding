/* Controlled native-loader fixture.
 * Family: SNF-181; provider: 4; profile: lld/test/ELF/shared-ppc64.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2900; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 182040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 182041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 182042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 182043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 182044; }
