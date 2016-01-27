#include"method.h"
#include<string.h>
#include<stdio.h>
#define MAX_BUF 64
int problem_67(){
	char trans_string[MAX_BUF];
	int input_number, length;
	printf("정수 입력 : ");
	scanf("%d", &input_number);
	itoa(input_number, trans_string, 10);
	length = strlen(trans_string);
	printf("자리수 = %d\n", length);
	return 0;
}