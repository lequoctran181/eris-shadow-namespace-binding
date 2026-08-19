/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 3; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2275; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 143030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 143031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 143033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 143035; }
