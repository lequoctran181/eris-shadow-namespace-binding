/* Controlled native-loader fixture.
 * Family: SNF-064; provider: 3; profile: lld/test/ELF/hexagon-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1027; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 65031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 65032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 65033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 65034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 65035; }
