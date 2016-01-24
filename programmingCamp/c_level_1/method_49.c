#include "method.h"

int problem_49() {
	int lotto;

	printf("복권추첨을 시작합니다.\n");
	printf("준비되었으면 아무키나 누르세요.\n");
	printf("아무키나 누르면 번호가 출력됩니다.\n");
	getchar();

	srand(time(NULL));

	while(1) {
		lotto = rand();

		if(lotto >= 1000 && lotto <= 9999) {
			printf("%d\n", lotto);
			break;
		}
	}
	printf("당첨번호를 확인하세요.\n");
	return 0;
}