#include "method.h"

/*
*	1~n까지 홀수의 합을 재귀함수를 이용하여 구하기
*/

int problem_57(){
	int n;

	printf("정수 n을 입력하세요. ");
	scanf("%d", &n);

	if(n < 0){
		printf("범위를 벗어났습니다.\n");
		exit(0);
	}

	printf("결과 : %d\n", Oddsum(n));

	return 0;
}

int Oddsum(int n){
	static int sum = 0;
	if(n == 1){
		return 1;
	}
	else {
		if(n%2 == 0){
			Oddsum(n-1);
		}
		else{
			sum = n + Oddsum(n-2);
		}
	}
	return sum;
}