#include"method.h"
#include<stdio.h>
#include<string.h>
#define MAX_BUF 64
int problem_61(){
	int input_number, length, i;
	char trans_string[MAX_BUF];
	printf("���� �Է� : ");
	scanf("%d", &input_number);
	itoa(input_number, trans_string, 10);
	length = strlen(trans_string);
	for(i = length-1 ; i >= 0 ; i--){
		printf("%c", trans_string[i]);
	}
	printf("\n");
	printf("�ڸ��� = %d", length);
	return 0;
}