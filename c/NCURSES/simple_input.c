#include <ncurses.h>
#include <string.h>

int main()
{
	char mesg[] = "Enter a string: ";
	char str[80];
	int row, col;

	initscr();
	getmaxyx(stdscr, row, col);
	mvprintw(row/2, (col-strlen(mesg)) / 2, "%s", mesg);
	getstr(str);
	mvprintw(LINES - 2, 0, "You Entered: %s", str);
	mvchgat(LINES -2, 0, -1, A_BLINK | A_REVERSE, 0, NULL);
	getch();
	endwin();
	return 0;
}
