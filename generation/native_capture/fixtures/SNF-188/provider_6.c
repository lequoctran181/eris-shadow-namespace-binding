/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 6; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 3014; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 189060; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 189063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 189064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 189065; }
