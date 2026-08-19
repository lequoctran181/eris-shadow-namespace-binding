/* Controlled native-loader fixture.
 * Family: SNF-050; provider: 1; profile: lld/test/ELF/gnu-ifunc-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 801; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 51010; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 51012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 51014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 51015; }
