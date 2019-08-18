/* X modifiers */
#define XK_ANY_MOD    UINT_MAX
#define XK_NO_MOD     0
#define XK_SWITCH_MOD (1<<13)

#define OPAQUE 0xff
#define USE_ARGB (alpha != OPAQUE && opt_embed == NULL)

/* XEMBED messages */
#define XEMBED_FOCUS_IN  4
#define XEMBED_FOCUS_OUT 5

#ifdef IS_SET
#undef IS_SET
#endif
#define IS_SET(flag)     ((win.mode & (flag)) != 0)
#define TRUERED(x)       (((x) & 0xff0000) >> 8)
#define TRUEGREEN(x)     (((x) & 0xff00))
#define TRUEBLUE(x)      (((x) & 0xff) << 8)

