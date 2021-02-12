//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    // { ICON, COMMAND, UPDATE-INTERVAL, UPDATE-SIGNAL }
    {"", "echo ' | '$(curl ifconfig.me)", 0, 0},
    /* {"", "sb-music", 30, 8}, */
    {"", "sb-kbselect",     0,      31},
    {"", "sb-mailbox",      1,      21},
    {"", "sb-pacpackages",  30,     22},
    {"", "sb-forecast",     240,    11},
    {"", "sb-moonphase",    240,    12},
    {"", "sb-volume",       0,      4},
    {"", "sb-battery",      5,      3},
    {"", "sb-internet",     10,     2},
    {"", "sb-clock",        10,     1},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
