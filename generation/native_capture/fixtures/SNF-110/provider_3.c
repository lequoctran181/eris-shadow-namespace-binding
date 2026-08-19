/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 3; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1763; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 111030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 111032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 111033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 111034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 111035; }
