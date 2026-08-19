/* Controlled native-loader fixture.
 * Family: SNF-018; provider: 3; profile: lld/test/ELF/gc-sections-print.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 291; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 19030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 19031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 19032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 19033; }
