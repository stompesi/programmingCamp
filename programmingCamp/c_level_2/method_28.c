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
	printf("1���� 100������ ������ ���ߴ� ����\n");
	do{
		printf("%d�� �õ� >> ", count);
		scanf("%d", &answer_number);
	}while(question_number != answer_number);
	printf("�����Դϴ�\n");

	return 0;
}