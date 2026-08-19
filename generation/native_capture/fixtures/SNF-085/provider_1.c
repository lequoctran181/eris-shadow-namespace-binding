/* Controlled native-loader fixture.
 * Family: SNF-085; provider: 1; profile: lld/test/ELF/pack-dyn-relocs.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1361; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 86010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 86011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 86012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 86013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 86014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 86015; }
