#include <ncurses.h>

int main(void)
{
	initscr();
	WINDOW *newwin(int y, int x, int start_y, int start_x);
	WINDOW *main_win;
	main_win = newwin(6, 5, 3, 5);
	box(main_win, 0, 0);
	wrefresh(main_win);
	wgetch(main_win);
	endwin();
	return 0;
}
