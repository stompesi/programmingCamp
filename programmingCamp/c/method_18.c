#include "method.h"
#include <malloc.h>

int problem_18() {
	int n, i, max;
	int *ptr;

	printf("18. �����Ҵ��� �̿��Ͽ� ���� n���� �Է¹޾� ���� ū ���� ���ϴ� ���α׷�.\n");

	printf("������ ���� n : ");
	scanf("%d", &n);
	if(n < 0) {
		printf("0���� ū ���� �Է��ϼ���.\n");
		return 0;
	}

	ptr = malloc(n*sizeof(int));

	for(i = 0; i < n; i++) {
		printf("%d��° ���� : ", i + 1);
		scanf("%d", &ptr[i]);
	}

	max = ptr[0];
	for(i = 1; i < n; i++) {
		if(ptr[i] > max) {
			max = ptr[i];
		}
	}

	printf("���� ū ���� : %d\n", max);

	return 0;
}