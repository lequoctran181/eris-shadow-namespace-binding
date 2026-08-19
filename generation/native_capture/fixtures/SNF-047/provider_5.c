/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 5; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 757; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 48050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 48051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 48052; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 48054; }
