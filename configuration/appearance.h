// appearance
static const unsigned int borderpx = 1; // border pixel of windows
static const int gappx = 6;             // gapps between windows
static const unsigned int snap = 32;    // snap pixel
static const int showbar = 0;           // 0 means no bar
static const int topbar =
    0; // 0 means bottom bar (aurora-shell-bar is bottom bar)
static const char font[] = "IosevkaTerm Nerd Font 10"; // default font

// colorschemes
// * the format is: fg, bg, border
static const char *colors[][3] = {
    [SchemeNorm] = {colorscheme.foreground, colorscheme.background,
                    colorscheme.black},

    [SchemeSel] = {colorscheme.blue, colorscheme.background,
                   colorscheme.lighter_black},
};
