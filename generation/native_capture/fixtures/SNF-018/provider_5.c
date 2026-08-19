/* Controlled native-loader fixture.
 * Family: SNF-018; provider: 5; profile: lld/test/ELF/gc-sections-print.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 293; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 19050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 19052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 19053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 19054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 19055; }
