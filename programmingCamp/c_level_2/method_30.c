#include "method.h"

/*
*	정수를 문자열로 변환후 출력
*/
void tran(int i);

int problem_30(){
	int n, a, b, c, d;

	fflush(stdin);
	printf("10000보다 작은 정수 하나를 입력하세요. ->");
	scanf("%d", &n);

	if(n >= 10000 || n < 0){
		printf("범위를 초과하였습니다.\n");
		exit(0);
	}

	a = n / 1000;
	b = n / 100 - (a * 10);
	c = n / 10 - (a * 100 + b * 10);
	d = n % 10;

	if(a > 0){
		tran(a);
		printf("천 ");
	}
	if(b > 0){
		tran(b);
		printf("백 ");
	}
	if(c > 0){
		tran(c);
		printf("십 ");
	}
	if(d > 0){
		tran(d);
	}
	printf("\n");

	return 0;
}

void tran(int i){
	switch(i){
		case 1: printf("일"); break;
		case 2: printf("이"); break;
		case 3: printf("삼"); break;
		case 4: printf("사"); break;
		case 5: printf("오"); break;
		case 6: printf("육"); break;
		case 7: printf("칠"); break;
		case 8: printf("팔"); break;
		case 9: printf("구"); break;
	}
}