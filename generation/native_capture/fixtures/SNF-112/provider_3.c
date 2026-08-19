/* Controlled native-loader fixture.
 * Family: SNF-112; provider: 3; profile: lld/test/ELF/ppc64-abi-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1795; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 113030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 113031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 113032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 113033; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 113035; }
