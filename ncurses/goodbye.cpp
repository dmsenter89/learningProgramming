#include <ncurses.h>

int main()
{
    initscr();
    addstr("Goodbye, Cruel C programming!");
    refresh();
    getch();

    endwin();
    return 0;
}
