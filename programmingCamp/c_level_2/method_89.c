#include "method.h"

struct student_info {
	char *s_no;
	char *name;
	int grade;
	double GPA;
};

void print_student(struct student_info *student) {
	printf("학번: %s  이름: %s  학년: %d  평점: %lf\n", student->s_no, student->name, student->grade, student->GPA);
}

void input_student(struct student_info *student) {
	char buf[100];

	printf("학번: ");
	scanf("%s", buf);
	student->s_no = malloc(sizeof(char)*(strlen(buf) + 1));
	strcpy(student->s_no, buf);
	printf("이름: ");
	scanf("%s", buf);
	student->name = malloc(sizeof(char)*(strlen(buf) + 1));
	strcpy(student->name, buf);
	printf("학년: ");
	scanf("%d", &(student->grade));
	printf("평점: ");
	scanf("%lf", &(student->GPA));
}

int problem_89() {
	int i, num;
	struct student_info *ps;
	printf("학생수 입력 : ");
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