/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	/* "Source Code Pro:size=12" */
    "JetBrainsMono Nerd Font:size=12"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
#include "/home/jordan/.cache/wal/colors-wal-dmenu.h"
// static const char *colors[SchemeLast][2] = {
// 	/*     fg         bg       */
// 	[SchemeNorm] = { "#bbbbbb", "#222222" },
// 	[SchemeSel] = { "#eeeeee", "#005577" },
// 	[SchemeOut] = { "#000000", "#00ffff" },
// };
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static const unsigned int border_width = 4;
