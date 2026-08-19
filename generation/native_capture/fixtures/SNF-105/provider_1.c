/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 1; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1681; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 106012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 106013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 106015; }
