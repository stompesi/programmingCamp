#include "method.h"

int problem_77() {
	int a, b, c;
	srand(time(NULL));
	
	printf("ENTER를 치면 게임을 시작합니다. \n");
	getchar();

	while(1) {
		a = rand() % 10;
		b = rand() % 10;
		c = rand() % 10;

		printf("** %2d ** %2d ** %2d **\n", a, b, c);

		if(a == b && b == c) {
			printf("JACK POT!!! 축하합니다.\n\n");
			printf("게임 다시 시작 = ENTER\n");
			getchar();
		} else {
			printf("게임 다시 시작 = ENTER\n");
			getchar();
		}
	}
	return 0;
}