/* Controlled native-loader fixture.
 * Family: SNF-146; provider: 3; profile: lld/test/ELF/arm-tls-norelax-gd-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2339; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 147030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 147031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 147032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 147033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 147034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 147035; }
