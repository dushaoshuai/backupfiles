#include <stdio.h>
#include <ncurses.h>

void ncurses_test(void);

int main(void)
{
	printf("I am c!\n");
	ncurses_test();
	return 0;
}

void ncurses_test(void)
{
	initscr();
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();
}

