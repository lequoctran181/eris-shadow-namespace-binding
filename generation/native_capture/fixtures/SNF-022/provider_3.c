/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 3; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 355; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 23030; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 23032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 23033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 23035; }
