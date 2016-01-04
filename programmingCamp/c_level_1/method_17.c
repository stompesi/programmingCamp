#include "method.h"

struct course {
	char name[512];
	int grade_num;
	char grade[3];
};
struct grade {
	char *grade;
	double score;
};

double get_grade_double(char *grade);
double get_average(struct course *courses, int size);

int problem_17() {
	struct course courses[3] = {
		{ "�ڷᱸ��", 3, "C+" },
		{ "�ü��", 2, "A0" },
		{ "�����ͺ��̽�", 3, "B+" } };
	int i;
	double average = 0;

	printf("17. �� �л��� ������ ����ϴ� ���α׷�.\n\n");

	average = get_average(courses, 3);

	printf(" �����      ������    ���\n");
	for(i = 0; i < 3; i++) {
		printf("%s\t%d\t%s\n", courses[i].name, courses[i].grade_num, courses[i].grade);
	}
	printf("---------------------------\n");
	printf("�� ��\t\t\t%.2lf\n", average);
}

double get_grade_double(char *grade) {
	int i = 0;
	struct grade standard_grade[] = 
	{{"A+", 4.5}, 
	 {"A0", 4.0}, 
	 {"B+", 3.5}, 
	 {"B0", 3.0}, 
	 {"C+", 2.5}, 
	 {"C0", 2.0}, 
	 {"D+", 1.5},
	 {"D0", 1.0}, 
	 {"F" , 0.0}};

	for(i = 0 ; i < 9; i++) {
		if(strcmp(grade, standard_grade[i].grade) == 0) {
			return standard_grade[i].score;
		}
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
