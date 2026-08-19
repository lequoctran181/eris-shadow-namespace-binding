/* Controlled native-loader fixture.
 * Family: SNF-039; provider: 5; profile: lld/test/ELF/relro-init-fini-script.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 629; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 40051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 40052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 40053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 40054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 40055; }
