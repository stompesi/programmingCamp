#include "method.h"

int problem_74() {
	int num1, num2, answer=0;

	srand(time(NULL));
	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;

	printf("����� 99�� �Է��ϼ���.\n");

	while(1) {
		printf("%d x %d = ? ", num1, num2);
		scanf("%d", &answer);
		if(answer == 99) {
			break;
		}
		else if(answer == num1*num2) {
			printf("�¾ҽ��ϴ�.!\n");
			num1 = rand() % 9 + 1;
			num2 = rand() % 9 + 1;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�.!\n");
		}
	}

	return 0;
}