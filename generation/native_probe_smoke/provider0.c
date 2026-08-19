__attribute__((visibility("default"))) int shadow_alpha(void) { return 101; }
__attribute__((visibility("default"), weak)) int shadow_weak(void) { return 111; }
__attribute__((visibility("hidden"))) int shadow_hidden(void) { return 121; }
