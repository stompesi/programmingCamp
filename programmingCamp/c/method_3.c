#include "method.h"

int problem_3() {
	int rank;

	scanf("%d", &rank);

	// 1등은 프린트, 컴퓨터, 상금, 상패 를 출력
	// 2등은 컴퓨터, 상금, 상패 를 출력
	// 3등은 상금, 상패 를 출력
	// 4등은 상패 를 출력
	// 그 외는 없음을 출력

	if (rank < 0) {
		printf("잘못된 입력입니다.\n");
		return 0;
	}

	switch (rank)
	{
	case 1: printf("프린트, ");
	case 2: printf("컴퓨터, ");
	case 3: printf("상금, ");
	case 4: printf("상패"); break;
	default: printf("없음");
		break;
	}
	putchar('\n');

	return 0;
}