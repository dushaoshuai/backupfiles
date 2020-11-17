#include <ncurses.h>
#define MY_START_Y 35
#define MY_START_X 74

void enemy(int mv_y,int mv_x);
void myself(int my_y, int my_x);
void enemy_enemy(void);


int main(void)
{
	initscr();
	keypad(stdscr, TRUE);
	start_color();
	init_pair(1, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);

	mvprintw(0, 74, "q to quit!");

	enemy_enemy();
	int my_y, my_x;
	myself(MY_START_Y, MY_START_X);

	int ch;
	for (my_y = MY_START_Y, my_x = MY_START_X; (ch = getch()) != 'q'; clear(), enemy_enemy(), myself(my_y, my_x))
	{
		switch (ch)	
		{
			case KEY_LEFT :
				my_x -= 1;		
				break;
			case KEY_RIGHT :
				my_x += 1;
				break;
			case KEY_UP :
				my_y -= 1;
				break;
			case KEY_DOWN :
				my_y += 1;
				break;
			default :
				break;
		}
	}

	endwin();
	return 0;
}

void enemy(int mv_y, int mv_x)
{
	attron(COLOR_PAIR(2));
	mvprintw(mv_y, mv_x, "XX");	
	attroff(COLOR_PAIR(2));

	attron(COLOR_PAIR(2));
	mvprintw(mv_y + 1, mv_x, "==");
	attroff(COLOR_PAIR(2));
}

void myself(int my_y, int my_x)
{
	attron(COLOR_PAIR(3));
	mvprintw(my_y, my_x, "^A^");	
	mvprintw(my_y + 1, my_x, "^^^");	
	attroff(COLOR_PAIR(3));
}

void enemy_enemy(void)
{
	int x, y, count_x, count_y;
	for (y = 2, count_y = 1; count_y <= 4; y += 4, count_y++)
		for (x = 15, count_x = 1; count_x <= 20; enemy(y, x), x += 6, count_x++);	
}
