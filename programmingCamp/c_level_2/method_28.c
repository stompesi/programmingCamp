#include"method.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int problem_28(){
	int question_number, answer_number;
	int count = 1;
	srand(time(NULL));
	question_number = rand() % 99 + 1;
	printf("%d\n", question_number);	
	printf("1에서 100까지의 난수를 맞추는 문제\n");
	do{
		printf("%d차 시도 >> ", count);
		scanf("%d", &answer_number);
	}while(question_number != answer_number);
	printf("정답입니다\n");

	return 0;
}