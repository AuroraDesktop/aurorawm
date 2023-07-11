// definition for buttons
// * what are buttons? buttons are a way to tell the WM what will happen when
// some
// * kind of "even" is happening (mostly clicks on: X, where X is the element
// expressed
// * by the given event), e.g, when clicking the X, wm should: A, where:
// *   -> X: Layout symbol.
// *   -> A: Cycle through available layouts.
// * note: available events atm are:
// *   -> ClkTagBar
// *   -> ClkLtSymbol
// *   -> ClkStatusText
// *   -> ClkWinTitle
// *   -> ClkClientWin
// *   -> ClkRootWin
// format for defining them is:
// * click, event mask, button, function argument
static const Button buttons[] = {
    {ClkLtSymbol, 0, Button1, setlayout, {0}},
    {ClkLtSymbol, 0, Button3, setlayout, {.v = &layouts[2]}},
    {ClkWinTitle, 0, Button2, zoom, {0}},
    {ClkStatusText, 0, Button2, spawn, SHCMD(TERMINAL_CMD)},
    {ClkClientWin, MODKEY, Button1, movemouse, {0}},
    {ClkClientWin, MODKEY, Button2, togglefloating, {0}},
    {ClkClientWin, MODKEY, Button3, resizemouse, {0}},
    {ClkTagBar, 0, Button1, view, {0}},
    {ClkTagBar, 0, Button3, toggleview, {0}},
    {ClkTagBar, MODKEY, Button1, tag, {0}},
    {ClkTagBar, MODKEY, Button3, toggletag, {0}},
};
