#include"method.h"
#include<stdlib.h>
#include<stdio.h>
typedef struct student{
	char student_name[30];
	int nat_lang_score;
	int eng_lang_score;
	int math_score;
}student;
void show_score(student* p_stu, int count){
	int i = 0, total;
	double ave;
	printf("< ��ü ����ǥ >\n");
	printf("�̸�\t����\t����\t����\t����\t���\n");
	for(i = 0; i < count ; i++){
		total = (p_stu + i)->nat_lang_score + (p_stu + i)->eng_lang_score + (p_stu + i)->math_score;
		ave = (double)total/3;
		printf("%s\t%d\t%d\t%d\t%d\t%.2f\n", (p_stu + i)->student_name, (p_stu + i)->nat_lang_score,
			(p_stu + i)->eng_lang_score, (p_stu + i)->math_score, total, ave);
	}
}
void problem_22(){
	int count, i;
	student* p_student;
	printf(" ��ü �л� ���� �Է��ϼ��� >> ");
	scanf("%d", &count);

	p_student = (student*)malloc(sizeof(student) * count);
	for(i = 0 ; i < count ; i++){
		printf("�̸� : ");
		scanf("%s", (p_student + i)->student_name);
		printf("���� : ");
		scanf("%d", &(p_student + i)->nat_lang_score);
		printf("���� : ");
		scanf("%d", &(p_student + i)->eng_lang_score);
		printf("���� : ");
		scanf("%d", &(p_student + i)->math_score);
	}
	show_score(p_student, count);
	free(p_student);
}