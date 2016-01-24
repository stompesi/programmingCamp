#include "method.h"

struct student_info {
	char *s_no;
	char *name;
	int grade;
	double GPA;
};

void print_student(struct student_info *student) {
	printf("�й�: %s  �̸�: %s  �г�: %d  ����: %lf\n", student->s_no, student->name, student->grade, student->GPA);
}

void input_student(struct student_info *student) {
	char buf[100];

	printf("�й�: ");
	scanf("%s", buf);
	student->s_no = malloc(sizeof(char)*(strlen(buf) + 1));
	strcpy(student->s_no, buf);
	printf("�̸�: ");
	scanf("%s", buf);
	student->name = malloc(sizeof(char)*(strlen(buf) + 1));
	strcpy(student->name, buf);
	printf("�г�: ");
	scanf("%d", &(student->grade));
	printf("����: ");
	scanf("%lf", &(student->GPA));
}

int problem_89() {
	int i, num;
	struct student_info *ps;
	printf("�л��� �Է� : ");
	scanf("%d", &num);
	ps = malloc(sizeof(struct student_info)*num);
	for(i = 0; i < num; i++) {
		input_student(ps+i);
	}
	for(i = 0; i < num; i++) {
		print_student(ps+i);
	}

	return 0;
}