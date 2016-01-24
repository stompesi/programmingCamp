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

	printf("11. 볼링 경기의 점수를 계산하는 프로그램.\n");

	// 1 ~ 9프레임 계산.
	for(i = 0 ; i < 9 ; i++) {
		result += array[i][0] + array[i][1];
		if(array[i][0] == 10) {
			result += array[i+1][0] + array[i+1][1];
		} else if(array[i][0] + array[i][1] == 10) {
			result += array[i+1][0];
		}
	}

	// 10프레임 보너스 점수 까지 계산.
	if(array[9][0] == 10) {
		result += 10 + array[9][1] + array[9][2];
	} else if(array[9][0] + array[9][1] == 10) {
		result += 10 + array[9][2];
	} else {
		result += array[9][0] + array[9][1];
	}

	// 결과 출력
	for(i = 0 ; i < 9 ; i++) {
		printf("프레임 %d : %d %d\n", i + 1, array[i][0], array[i][1]);
	}
	printf("프레임 %d : %d %d %d\n", 9 + 1, array[9][0], array[9][1], array[9][2]);
	printf("점수 : %d점\n", result);

	return 0;
}
