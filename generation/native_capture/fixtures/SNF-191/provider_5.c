/* Controlled native-loader fixture.
 * Family: SNF-191; provider: 5; profile: lld/test/ELF/gnu-ifunc-dyntags.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3061; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 192050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 192052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 192053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 192054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 192055; }
