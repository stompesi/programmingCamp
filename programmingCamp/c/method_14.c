#include "method.h"

#define MAX 10

int max_sub_min(int arr[]);

int problem_14() {
	int a[MAX], i, result;

	printf("10���� ������ �Է¹޾� (�ִ�-�ּ�)�� ���� ���ϴ� ���α׷�.\n");
	
	for(i = 0; i < MAX; i++) {
		printf("%2d��° ���� : ", i + 1);
		scanf("%d", &a[i]);
	}
	result = max_sub_min(a);

	printf("��� : %d\n", result);
}

int max_sub_min(int arr[]) {
	int max = arr[0], min = arr[0], i;

	for(i = 1; i < MAX; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
		if(arr[i] < min) {
			min = arr[i];
		}
	}

	return max - min;
}