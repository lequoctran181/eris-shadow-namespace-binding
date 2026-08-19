/* Controlled native-loader fixture.
 * Family: SNF-187; provider: 4; profile: lld/test/ELF/ppc32-local-branch.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2996; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 188040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 188041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 188043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 188044; }
