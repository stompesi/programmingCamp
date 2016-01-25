#include "method.h"

/*
* 십진수를 n진수로 바꾸는 프로그램
*/

void jinbub(int base, int n);

int problem_72(){
	int n, i;

	printf("십진수 입력 : ");
	scanf("%d", &n);

	if(n < 0){
		printf("잘못된 입력입니다.\n");
		exit(0);
	}
	
	for(i = 2; i < 10; i++){
		printf("%d진수 : ", i);
		jinbub(i, n);
		putchar('\n');
	}
	return 0;
}

void jinbub(int base, int n){
	int i, j, jin[20];
	for(i = 0; 0 < n; i++){		// 2진수로
		jin[i] = n % base;
		n = n / base;
	}

	for(j = i - 1; j >= 0; j--){		//역순출력
		printf("%d", jin[j]);
	}
}