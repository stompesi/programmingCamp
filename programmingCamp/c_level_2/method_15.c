#include "method.h"

int leng(char* p);
void pal(char* p, int len);

/*
*	회문 판별
*/

int problem_15(){
	char str[100];
	int length;

	printf("문자열 입력>> ");
	scanf("%s", str);

	length = strlen(str);

	pal(str, length);

	return 0;
}

int leng(char* p){		//문자열 길이 구하는 함수
	int l = 0;

	while(p[l] != '\0')		//문자열끝까지 반복
		l++;

	return l;
}

void pal(char* p, int len){
	int i, count = 0;

	for(i = 0; i < len/2; i += 2){
		if(p[i] != p[len-i-2] || p[i+1] != p[len-i-1]){
			printf("회문이 아닙니다.\n");
			exit(0);
		}
	}
	printf("회문입니다.\n");
}