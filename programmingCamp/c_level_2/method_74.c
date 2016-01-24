#include "method.h"

int problem_74() {
	int num1, num2, answer=0;

	srand(time(NULL));
	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;

	printf("종료는 99를 입력하세요.\n");

	while(1) {
		printf("%d x %d = ? ", num1, num2);
		scanf("%d", &answer);
		if(answer == 99) {
			break;
		}
		else if(answer == num1*num2) {
			printf("맞았습니다.!\n");
			num1 = rand() % 9 + 1;
			num2 = rand() % 9 + 1;
		}
		else {
			printf("틀렸습니다.!\n");
		}
	}

	return 0;
}