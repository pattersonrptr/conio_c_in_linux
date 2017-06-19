// conio.c for ANSI C and C++
// Extra functions are also provided.
// (C) 2013 Nandakumar <nandakumar96@gmail.com>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

// General Utility Functions

void cagxy(unsigned int x, unsigned int y) { // Clear and Goto X,Y
	printf("%s\x1b[%d;%df", CLEAR, y, x);
}

void clrscr() { // Clear the Screen
	printf("%s",CLEAR);	
}

char getch() {
	char c = '\0';
	system("stty raw -echo");
	c = getchar();
	system("stty cooked echo");
	
	return c;
}

void gotox(unsigned int x) {
	printf("\x1b[%dG", x);
}

void gotoxy(unsigned int x, unsigned int y) {
	printf("\x1b[%d;%df", y, x);
}

void nocursor() {
	printf("\x1b[?25l");
}

void reset_video() {
	printf("\x1b[0m");
}

void showcursor() {
	printf("\x1b[?25h");
}

void textcolor(char *color) {
	printf("%s",color);
}

void textbackground(char color[11]) {
	char col[11];
	strcpy(col,color);
	col[2]='4'; // The given color will be fg color. Replace ‘3’ with ‘4’.
	printf("%s",col);
}
