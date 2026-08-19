/* Controlled native-loader fixture.
 * Family: SNF-145; provider: 3; profile: lld/test/ELF/linkerscript/map-file.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2323; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 146031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 146032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 146033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 146034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 146035; }
