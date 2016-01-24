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

	printf("학번: "); gets(buf); 
	fflush(stdin);
	strcpy(ps->s_no, buf);
	printf("이름: "); gets(buf); 
	fflush(stdin);
	strcpy(ps->name, buf);
	printf("학년: "); scanf("%d", &ps->grade); 
	fflush(stdin);
	printf("평점: "); scanf("%lf", &ps->GPA); 
	fflush(stdin);
}

void print_student(struct student_info *ps) {
	printf("학번: %s  이름: %s  학년: %d  평점: %lf\n", ps->s_no, ps->name, ps->grade, ps->GPA);
}

int problem_123() {
	int i, num;
	struct student_info *ps;

	printf("학생수 입력 : "); scanf("%d", &num);
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