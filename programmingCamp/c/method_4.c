#include "method.h"

int problem_4() {
	char ch1, ch2, ch3;

	scanf("%c %c %c", &ch1, &ch2, &ch3);

	// ������ 3���� �Է� �޾� ���ĺ� �������� ���� ���� ���� �����ڸ� ���

	// �빮�� �Է��� �ҹ��ڷ� �ٲ��ֱ�
	ch1 = (char)tolower(ch1);
	ch2 = (char)tolower(ch2);
	ch3 = (char)tolower(ch3);

	// �ҹ��ڷ� �ٲ�µ� a���� ���� ���̸� ����
	if (ch1 < 96 || ch2 < 96 || ch3 < 96) {	// ASCII a = 97
		printf("�߸��� �Է��Դϴ�.\n");
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