/* Controlled native-loader fixture.
 * Family: SNF-112; provider: 7; profile: lld/test/ELF/ppc64-abi-version.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1799; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 113070; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 113073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 113074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 113075; }
