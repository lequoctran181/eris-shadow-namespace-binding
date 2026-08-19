/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 5; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1333; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 84050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 84051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 84053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 84054; }
