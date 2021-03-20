//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    // { ICON, COMMAND, UPDATE-INTERVAL, UPDATE-SIGNAL }
    {"", "echo ' | '$(ip route get 1.2.3.4 | awk '{print $7}')", 300, 0},
    /* {"", "sb-music", 30, 8}, */
    {"", "sb-kbselect",     0,      14},
    {"", "sb-mailbox",      1,      20},
    {"", "sb-pacpackages",  30,     21},
    {"", "sb-forecast",     300,    22},
    {"", "sb-moonphase",    300,    23},
    {"", "sb-volume",       1,      13},
    {"", "sb-battery",      5,      12},
    {"", "sb-internet",     10,     11},
    {"", "sb-clock",        10,     10},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
