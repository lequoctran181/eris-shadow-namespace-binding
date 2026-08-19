/* Controlled native-loader fixture.
 * Family: SNF-187; provider: 5; profile: lld/test/ELF/ppc32-local-branch.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2997; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 188051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 188052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 188053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 188055; }
