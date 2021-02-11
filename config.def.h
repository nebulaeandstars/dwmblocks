//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    // { ICON, COMMAND, UPDATE-INTERVAL, UPDATE-SIGNAL }
    {"", "echo ' | '$(curl ifconfig.me)", 0, 0},
    /* {"", "sb-music", 30, 8}, */
    /* {"", "sb-volume", 0, 3}, */
    {"", "sb-kbselect",     0,      30},
    {"", "sb-mailbox",      1,      7},
    {"", "sb-pacpackages",  30,     6},
    {"", "sb-forecast",     240,    5},
    {"", "sb-moonphase",    240,    4},
    {"", "sb-battery",      5,      2},
    {"", "sb-internet",     30,     9},
    {"", "sb-clock",        30,     1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
