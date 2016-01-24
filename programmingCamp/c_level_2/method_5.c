#include "method.h"

#define MAX 10

int search(int array[], int number);

int problem_5() {
	int array[MAX] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
	int number, index;

	printf("�迭���� ������ ���� ��ġ�� ã�Ƴ��� ���α׷�.\n");

	printf("ã�����ϴ� �� : ");
	scanf("%d", &number);
	
	index = search(array, number);
	if (index == -1) {
		printf("%d�� �迭�� �����ϴ�.\n", number);
	}
	else {
		printf("����� ��ġ : %d\n", index);
	}

	return 0;	
}

// �迭�� ã�����ϴ� ���� �Ѱ��ָ� ���� ��ġ�� ��ȯ���ش�.
// ������ -1�� ��ȯ.
int search(int array[], int number) {
	int i;

	for (i = 0; i < MAX; i++) {
		if (array[i] == number) {
			return i;
		}
	}

	return -1;
}

