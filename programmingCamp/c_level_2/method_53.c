#include "method.h"

void gotoxy(int x, int y) {
	COORD CursorPosition = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

int problem_53() {
	char* msg = "Happy Birthday! ";
	int repeat, i;

	for(repeat = 0 ; repeat < strlen(msg) ; repeat++) {
		gotoxy(10, 5);
		printf("%s", msg + repeat);
		for (i = 0 ; i < repeat ; i++) {
			printf("%c", *(msg + i));
		}
		Sleep(500);
	}

	return 0;
}