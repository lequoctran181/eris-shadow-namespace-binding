/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 1; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 737; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 47010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 47011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 47012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 47013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 47014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 47015; }
