/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 7; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1719; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 108070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 108071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 108072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 108073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 108074; }
