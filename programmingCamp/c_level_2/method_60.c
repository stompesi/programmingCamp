#include "method.h"

/*
*	문자를 입력받아 아스키코드값을 10진수, 8진수,
*	16진수, 2진수로 출력
*/

int problem_60(){
	char c;
	int n, i, j, bi[8];

	printf("문자 입력 : ");
	scanf("%c", &c);

	n = (unsigned int)c;
	
	for(i = 0; 0 < n; i++){		// 2진수로
		bi[i] = n % 2;
		n = n / 2;
	}

	printf("십진수 : %d  8진수 : %o  16진수 : %x  2진수 : ", c, c, c);
	for(j = i - 1; j >= 0; j--){		//역순출력
		printf("%d", bi[j]);
	}
	putchar('\n');
	
	return 0;
}