/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 5; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3013; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 189051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 189052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 189053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 189054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 189055; }
