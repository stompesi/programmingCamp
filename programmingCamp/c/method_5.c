#include "method.h"

int problem_5() {
	int input_number;
	int i;

	scanf("%d", &input_number);

	// 소수는 2부터 시작
	// 나눈 나머지가 0이면, 나누어 떨어지는 것이니 소수가 아니다.
	// n이 나누어 떨어질때 n이 i와 같다면 소수 아니면 소수가 아니므로 출력후 종료

	if(input_number < 2) {
		printf("입력한 %d는 소수가 아닙니다.\n", input_number);	
		return 0;
	}

	for(i = 2; i <= input_number / 2; i++) {
		if (input_number % i == 0) {
			printf("입력한 %d는 소수가 아닙니다.\n", input_number);	
			return 0;
		}
	}
	
	printf("입력한 %d는 소수입니다.\n", input_number);
	return 0;
}