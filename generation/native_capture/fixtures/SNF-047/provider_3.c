/* Controlled native-loader fixture.
 * Family: SNF-047; provider: 3; profile: lld/test/ELF/common-archive-lookup.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 755; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 48030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 48031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 48032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 48033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 48035; }
