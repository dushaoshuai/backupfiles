#include <ncurses.h>

int main(void)
{
	initscr(); 		// start curses mode
	cbreak(); 		// Line buffering disabled
	keypad(stdscr, TRUE); 	// We get F1, F2 etc..
	noecho(); 		// Don't echo() while we do getch()
	start_color();

	int ch;
	printw("Type any character to see it in red\n");
	ch = getch(); 		// If raw() hadn't been called, we have to press enter before it gets to the program

	int n;
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_GREEN);
	init_pair(3, COLOR_RED, COLOR_YELLOW);
	init_pair(4, COLOR_RED, COLOR_BLUE);
	init_pair(5, COLOR_RED, COLOR_MAGENTA);
	init_pair(6, COLOR_RED, COLOR_CYAN);
	init_pair(7, COLOR_RED, COLOR_WHITE);
	for (n = 1; n <= 7; n++)
	{
		printw("The pressed key is ");		
		attron(COLOR_PAIR(n));
      		printw("%c", ch);
		refresh(); 		// Print it on to the real screen
		attroff(COLOR_PAIR(n));
		printw("\n");
		printw("Type another key to see it in red\n");
		ch = getch();
	}
//	getch(); 		// Wait for user input
	endwin(); 		// End curses mode

	return 0;
}
