#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1, 1, 0);
	int row, col;
	getmaxyx(stdscr, row, col);
	int ch = 56;

	attron(COLOR_PAIR(1) | A_REVERSE | A_BLINK);
	mvaddch(10, 14, ch | A_BOLD | A_UNDERLINE);
	attroff(COLOR_PAIR(1) | A_REVERSE | A_BLINK);

	printw("row = %d\n", row);
	printw("col = %d\n", col);
	getch();
	endwin();
	return 0;
}
