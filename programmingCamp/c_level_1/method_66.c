#include "method.h"

typedef struct Student{
	int id;
	char name[7];
	int kor_score;
	int eng_score;
	int math_score;
	int sum;
	double avg;
}Student;

int problem_66() {
	int size, i, j, count = 0;
	Student *p, temp;
	
	printf("학생의 수는? ");
	scanf("%d", &size);

	p = (Student *) malloc(sizeof(Student)*size);

	while(count != size) {
		printf("%d번째 학생 정보입력 : \n", count + 1);
		printf("이름 : ");
		scanf("%s", p[count].name);
		printf("국어 점수 : ");
		scanf("%d", &p[count].kor_score);
		printf("영어 점수 : ");
		scanf("%d", &p[count].eng_score);
		printf("수학 점수 : ");
		scanf("%d", &p[count].math_score);
		p[count].sum = p[count].eng_score + p[count].kor_score + p[count].math_score;
		p[count].avg = (double)p[count].sum / 3;

		count++;
	}

	printf("\n총점 출력\n");
	for( i = 0 ; i < size ; i++) {
		for(j = 0 ; j < size ; j++) {
			if(p[i].sum > p[j].sum) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	for( i = 0 ; i < size ; i++) {
		printf("%s 학생의 총점 : %d\n", p[i].name, p[i].sum);
	}

	return 0;
}