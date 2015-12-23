#include "method.h"

int problem_4() {
	char ch1, ch2, ch3;

	scanf("%c %c %c", &ch1, &ch2, &ch3);

	// 영문자 3개를 입력 받아 알파벳 순서에서 가장 먼저 오는 영문자를 출력

	// 대문자 입력을 소문자로 바꿔주기
	ch1 = (char)tolower(ch1);
	ch2 = (char)tolower(ch2);
	ch3 = (char)tolower(ch3);

	// 소문자로 바꿨는데 a보다 작은 값이면 오류
	if (ch1 < 96 || ch2 < 96 || ch3 < 96) {	// ASCII a = 97
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	if (ch1 < ch2) {
		if (ch1 < ch3) {
			printf("%c\n", ch1);
		}
		else {
			printf("%c\n", ch3);
		}
	}
	else {	// ch2 < ch1
		if (ch2 < ch3) {
			printf("%c\n", ch1);
		}
		else {
			printf("%c\n", ch3);
		}
	}
	
	return 0;
}