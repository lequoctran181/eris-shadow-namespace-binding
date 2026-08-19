/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 6; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1974; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 124061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 124063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 124064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 124065; }
