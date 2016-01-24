#include "method.h"

/*
* 십진수를 이진수로 바꾸는 프로그램
*/

int problem_24(){
	int i, j, n, binary[20];

	printf("십진수를 입력하세요. ");
	scanf("%d", &n);

	if(n < 0){
		printf("잘못된 입력입니다.\n");
		exit(0);
	}

	for(i = 0; 0 < n; i++){		// 2진수로
		binary[i] = n % 2;
		n = n / 2;
	}

	for(j = i - 1; j >= 0; j--){		//역순으로 출력
		printf("% d", binary[j]);
	}
	putchar('\n');

	return 0;
}