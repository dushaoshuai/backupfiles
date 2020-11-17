#include <stdio.h>
#include <ncurses.h>
void ncurses_test(int num);

int main(void)
{
	int count, input;

	printf("Which choice do you want?\n");
	for (count = 1; count <= 5; printf("%d\n", count), count++);
	scanf("%d", &input);
	ncurses_test(input);
	return 0;
}

void ncurses_test(int num)
{
	int count;
	initscr(); 								// Start curses mode
	for (count = 1; count <= num; printw("Hello World !!!\n"), count++); 	// Print Hello World
	refresh(); 								// Print it on to the real screen
	getch(); 								// Wait for user input
	endwin(); 								// End curses mode
}
