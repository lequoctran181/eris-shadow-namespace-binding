/* Controlled native-loader fixture.
 * Family: SNF-119; provider: 1; profile: lld/test/ELF/arm-wraparound-veneer.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1905; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 120010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 120011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 120012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 120013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 120014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 120015; }
