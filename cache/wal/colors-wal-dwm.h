static const char norm_fg[] = "#dbd7d1";
static const char norm_bg[] = "#190f16";
static const char norm_border[] = "#999692";

static const char sel_fg[] = "#dbd7d1";
static const char sel_bg[] = "#B35A4E";
static const char sel_border[] = "#dbd7d1";

static const char urg_fg[] = "#dbd7d1";
static const char urg_bg[] = "#DF252D";
static const char urg_border[] = "#DF252D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
