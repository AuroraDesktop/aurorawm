// some general
static const int enable_shell_integration =
    1; // enables aurora shell integration.
static const char *aurora_shell_bar_class =
    "Aurora-Shell-Bar"; // classname for the aurora shell bar.
static const char *shell_integration_cmd =
    "aurora-shell &"; // command to spawn the aurora shell.

// tags
static const char *tags[] = {"1", "2", "3", "4", "5", "6"};

// windows rules.
static const Rule rules[] = {
    /* xprop(1):
     *	WM_CLASS(STRING) = instance, class
     *	WM_NAME(STRING) = title
     */
    // format is: class, instance, title, tags mask, isfloating monitor?
};

// layouts
static const float mfact = 0.50;     // default master area size [0.05..0.95]
static const int nmaster = 1;        // number of clients in master area
static const int resizehints = 1;    // respect size hints in tiled resizals
static const int lockfullscreen = 1; // force focus on the fullscreen win

// layouts definition
// * format is: symbol, arrange function
// * note: first entry is default
// * note: no layout function means floating
static const Layout layouts[] = {
    {"[]=", tile},
    {"><>", NULL},
    {"[M]", monocle},
};
