#include "method.h"

int problem_3() {
	int rank;

	scanf("%d", &rank);

	// 1���� ����Ʈ, ��ǻ��, ���, ���� �� ���
	// 2���� ��ǻ��, ���, ���� �� ���
	// 3���� ���, ���� �� ���
	// 4���� ���� �� ���
	// �� �ܴ� ������ ���

	if (rank < 0) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	switch (rank)
	{
	case 1: printf("����Ʈ, ");
	case 2: printf("��ǻ��, ");
	case 3: printf("���, ");
	case 4: printf("����"); break;
	default: printf("����");
		break;
	}
	putchar('\n');

	return 0;
}