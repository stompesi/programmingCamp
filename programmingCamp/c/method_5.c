#include "method.h"

int problem_5() {
	int i, n, result = 1;

	scanf("%d", &n);

	// �Ҽ��� 2���� ����
	// ���� �������� 0�̸�, ������ �������� ���̴� �Ҽ��� �ƴϴ�.
	// n�� ������ �������� n�� i�� ���ٸ� �Ҽ� �ƴϸ� �Ҽ��� �ƴϹǷ� ����� ����

	if (n < 2) {
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}

	for (i = 2; i <= n; i++) {
		if (n % i == 0) {
			if (n == i) {
				printf("�Է��� %d�� �Ҽ��Դϴ�.\n", n);
				break;
			} else {
				printf("�Է��� %d�� �Ҽ��� �ƴմϴ�.\n", n);
				break;
			}
		}
	}
	

	return 0;
}