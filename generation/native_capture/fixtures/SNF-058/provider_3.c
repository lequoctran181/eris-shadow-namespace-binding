/* Controlled native-loader fixture.
 * Family: SNF-058; provider: 3; profile: lld/test/ELF/hexagon-tls-gd-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 931; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 59030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 59031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 59032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 59033; }
