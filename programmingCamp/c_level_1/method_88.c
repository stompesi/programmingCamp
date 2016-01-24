#include "method.h"

int problem_88() {
	char letter;
	int i = 1, n = 0;

	printf("코드 변환 프로그램\n");

	printf("문자 입력 : ");
	scanf("%c", &letter);
	
	while(!kbhit()) {
		printf("변환 결과 : %c\n", letter + i);
		i++;
		Sleep(1000);
	}

	return 0;
}