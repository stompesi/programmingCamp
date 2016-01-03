#include "method.h"

struct course {
	char name[512];
	int grade_num;
	char grade[3];
};

double get_grade_double(char *grade);
double get_average(struct course *courses, int size);

int problem_17() {
	struct course courses[3] = {
		{ "자료구조", 3, "C+" },
		{ "운영체제", 2, "A0" },
		{ "데이터베이스", 3, "B+" } };
	int i;
	double average = 0;

	printf("17. 한 학생의 평점을 계산하는 프로그램.\n\n");

	average = get_average(courses, 3);

	printf(" 과목명      학점수    등급\n");
	for(i = 0; i < 3; i++) {
		printf("%s\t%d\t%s\n", courses[i].name, courses[i].grade_num, courses[i].grade);
	}
	printf("---------------------------\n");
	printf("평 점\t\t\t%.2lf\n", average);
}

double get_grade_double(char *grade) {
	if(strcmp(grade, "A+")==0) {
		return 4.5;
	}
	else if(strcmp(grade, "A0") == 0) {
		return 4.0;
	}
	else if(strcmp(grade, "B+") == 0) {
		return 3.5;
	}
	else if(strcmp(grade, "B0") == 0) {
		return 3.0;
	}
	else if(strcmp(grade, "C+") == 0) {
		return 2.5;
	}
	else if(strcmp(grade, "C0") == 0) {
		return 2.0;
	}
	else if(strcmp(grade, "D+") == 0) {
		return 1.5;
	}
	else if(strcmp(grade, "D0") == 0) {
		return 1.0;
	}
	else if(strcmp(grade, "F") == 0) {
		return 0.0;
	}
}

double get_average(struct course *courses, int size) {
	double average = 0;
	int grade_sum = 0, i;

	for(i = 0; i < size; i++) {
		average += get_grade_double(courses[i].grade) * courses[i].grade_num;
		grade_sum += courses[i].grade_num;
	}

	average = average / grade_sum;

	return average;
}
