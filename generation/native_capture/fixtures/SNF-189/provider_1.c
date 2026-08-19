/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 1; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3025; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 190011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 190012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 190013; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 190015; }
