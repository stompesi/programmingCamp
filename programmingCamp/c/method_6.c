#include "method.h"

int problem_6() {
	int max = 100, min = 1, random, n, count = 0;

	// �Ź� �����Ҷ����� �ٸ� ������ �߻���Ű�� ���� �õ� ���� �ð����� �־���.
	// 1���� 100������ �����̹Ƿ� ���������� �Ͽ���.
	// �Է¹��� ���� �������� ������ min���� �Է¹��� ����
	// �Է¹��� ���� �������� ũ�� max���� �Է¹��� ���� ����
	// Ʋ�������� ī��Ʈ ����
	// ���߸� ������� ������� ���

	srand((unsigned)time(NULL));
	random = rand() % 100 + 1;

	while (1) {
		printf("%d���� %d������ ���� �Է��ϼ���. ", min, max);
		scanf("%d", &n);
		
		if (n < 1 || n > 100) {
			printf("�߸��� �Է��Դϴ�.\n");
			return 0;
		}
		if (n == random) {
			break;
		} else if (n > random) {
			max = n;
			count++;
		} else if (n < random) {
			min = n;
			count++;
		}
	}
	printf("%d������ ������ϴ�.\n", count);

	return 0;
}