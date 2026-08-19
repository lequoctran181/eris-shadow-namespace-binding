/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 5; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1973; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 124050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 124051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 124052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 124053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 124054; }
