#include "method.h"

/*
*	제어문으로 문자열 출력
*/

int problem_66(){
	char i, j;
	int n = 0;
/*
	for(i = 'A'; i <= 'Z'; i++){	// 첫번째 결과
		for(j = 'A'; j <= i; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z'; i++){	// 두번째 결과
		for(j = i; j <= 'Z'; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z'; i++){	// 세번째 결과
		for(j = i; j <= 'Z'; j++){
			printf(" ");
		}
		for(j = 'A'; j <= i; j++){
			printf("%c", j);
		}
		putchar('\n');
	}
*/
/*
	for(i = 'A'; i <= 'Z' - ('Z'-'A')/2; i++){	// 네번째 결과
		int count = 0;
		for(j = 'A'; j <= i; j++){	// 공백 앞쪽 출력
			printf("%c", j);
		}
		for(j = ('A' + n); j <= ('Z' - n); j++){
			printf(" ");
			count++;
		}
		for(j = i + count - 1; j <= 'Z'; j++){	// 카운트가 마지막에 한번더 증가하니 빼준다
			printf("%c", j);					// 공백 뒤쪽 출력
		}
		n++;
		putchar('\n');
	}
*/
	return 0;
}