#include "method.h"

int problem_11() {
	int array[12][3] = {
		{ 8, 1, 0 },
		{ 9, 1, 0 },
		{ 10, 0, 0 },
		{ 10, 0, 0 },
		{ 10, 0, 0 },
		{ 9, 0, 0 },
		{ 10, 0, 0 },
		{ 8, 0, 0 },
		{ 9, 1, 0 },
		{ 7, 2, 0 } };
	int result = 0;
	int i;

	printf("11. ���� ����� ������ ����ϴ� ���α׷�.\n");

	// 1 ~ 9������ ���.
	for(i = 0 ; i < 9 ; i++) {
		result += array[i][0] + array[i][1];
		if(array[i][0] == 10) {
			result += array[i+1][0] + array[i+1][1];
		} else if(array[i][0] + array[i][1] == 10) {
			result += array[i+1][0];
		}
	}

	// 10������ ���ʽ� ���� ���� ���.
	if(array[9][0] == 10) {
		result += 10 + array[9][1] + array[9][2];
	} else if(array[9][0] + array[9][1] == 10) {
		result += 10 + array[9][2];
	} else {
		result += array[9][0] + array[9][1];
	}

	// ��� ���
	for(i = 0 ; i < 9 ; i++) {
		printf("������ %d : %d %d\n", i + 1, array[i][0], array[i][1]);
	}
	printf("������ %d : %d %d %d\n", 9 + 1, array[9][0], array[9][1], array[9][2]);
	printf("���� : %d��\n", result);

	return 0;
}
