#include "method.h"

struct student_info{
	char *s_no;
	char *name;
	int grade;
	double GPA;
};

void input_student(struct student_info *ps) {
	char buf[100];
	ps->s_no = (char *)malloc(sizeof(char) * 8);
	ps->name = (char *)malloc(sizeof(char) * 7);

	printf("�й�: "); gets(buf); 
	fflush(stdin);
	strcpy(ps->s_no, buf);
	printf("�̸�: "); gets(buf); 
	fflush(stdin);
	strcpy(ps->name, buf);
	printf("�г�: "); scanf("%d", &ps->grade); 
	fflush(stdin);
	printf("����: "); scanf("%lf", &ps->GPA); 
	fflush(stdin);
}

void print_student(struct student_info *ps) {
	printf("�й�: %s  �̸�: %s  �г�: %d  ����: %lf\n", ps->s_no, ps->name, ps->grade, ps->GPA);
}

int problem_123() {
	int i, num;
	struct student_info *ps;

	printf("�л��� �Է� : "); scanf("%d", &num);
	fflush(stdin);

	ps = (struct student_info*) malloc(sizeof(struct student_info) * num);

	for( i = 0 ; i < num ; i++) {
		input_student(&ps[i]);
	}
	for( i = 0 ; i < num ; i++) {
		print_student(&ps[i]);
	}

	free(ps);

	return 0;
}