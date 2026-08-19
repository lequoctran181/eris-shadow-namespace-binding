/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 1; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 65; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 5012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 5013; }
