#include "method.h"

int problem_77() {
	int a, b, c;
	srand(time(NULL));
	
	printf("ENTER�� ġ�� ������ �����մϴ�. \n");
	getchar();

	while(1) {
		a = rand() % 10;
		b = rand() % 10;
		c = rand() % 10;

		printf("** %2d ** %2d ** %2d **\n", a, b, c);

		if(a == b && b == c) {
			printf("JACK POT!!! �����մϴ�.\n\n");
			printf("���� �ٽ� ���� = ENTER\n");
			getchar();
		} else {
			printf("���� �ٽ� ���� = ENTER\n");
			getchar();
		}
	}
	return 0;
}