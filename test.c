#include <stdio.h>
#include "conio.h"

int main() {
	char resp[30];
	
	// LIMPA A TELA.
	clrscr();	
	
	// MUDA A COR DO TEXTO.
	textcolor(BLUE);
	
	// MUDA A COR DO BACKGROUND.
	textbackground(BGC_YELLOW);
	
	// MANIPULA A POSIÇÃO DO CURSOR.
	gotoxy(30, 1);
	printf("conio.h");
	
	gotoxy(35, 2);
	printf("no");
	
	gotoxy(40, 3);
	printf("seu");
	
	gotoxy(45, 4);
	printf("Linux!");
	
	getch();
	
	// RESTAURA O PADRÃO DE CORES DO TERMINAL.
	reset_video();
	
	// LIMPA A TELA E MUDA O CURSOR DE POSIÇÃO
	cagxy(40, 7);
	printf("Limpou a tela e mudou de lugar!");
	
	gotoxy(40, 8);
	
	// SOME O CURSOR
	nocursor();
	
	// MOVE O CURSOR NA HORIZONTAL
	int i = 0;
	for(i = 0; i < 120; i++) {
		gotox(i);
		printf("-");
	}
	
	getch();
	
	textcolor(YELLOW);
	textbackground(BLUE);
	
	gotoxy(10, 5);
	showcursor();
	printf(":)");
	
	gotoxy(10, 6);
	textcolor(GREEN);
	textbackground(BGC_BLACK);
	gotoxy(11, 6);
	printf("O que achou?");
	textcolor(MAGENTA);
	gotoxy(12, 7);
	scanf("%s", resp);
	
	
	textcolor(IRED);
	textbackground(BGC_IBLUE);
	gotoxy(40, 7);
	printf(">>>>>>>>>>>>>>>> %s <<<<<<<<<<<<<<<<", resp);
	
	__fpurge(stdin);
	
	getch();
	reset_video();
	clrscr();	
	puts("");
	
	getch();

	return 0;
}
