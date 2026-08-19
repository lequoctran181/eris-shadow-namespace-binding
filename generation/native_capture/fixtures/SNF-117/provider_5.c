/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 5; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1877; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 118050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 118052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 118053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 118054; }
