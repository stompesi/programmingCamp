#include "method.h"

int problem_49() {
	int lotto;

	printf("������÷�� �����մϴ�.\n");
	printf("�غ�Ǿ����� �ƹ�Ű�� ��������.\n");
	printf("�ƹ�Ű�� ������ ��ȣ�� ��µ˴ϴ�.\n");
	getchar();

	srand(time(NULL));

	while(1) {
		lotto = rand();

		if(lotto >= 1000 && lotto <= 9999) {
			printf("%d\n", lotto);
			break;
		}
	}
	printf("��÷��ȣ�� Ȯ���ϼ���.\n");
	return 0;
}