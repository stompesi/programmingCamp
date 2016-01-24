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
	
	printf("�л��� ����? ");
	scanf("%d", &size);

	p = (Student *) malloc(sizeof(Student)*size);

	while(count != size) {
		printf("%d��° �л� �����Է� : \n", count + 1);
		printf("�̸� : ");
		scanf("%s", p[count].name);
		printf("���� ���� : ");
		scanf("%d", &p[count].kor_score);
		printf("���� ���� : ");
		scanf("%d", &p[count].eng_score);
		printf("���� ���� : ");
		scanf("%d", &p[count].math_score);
		p[count].sum = p[count].eng_score + p[count].kor_score + p[count].math_score;
		p[count].avg = (double)p[count].sum / 3;

		count++;
	}

	printf("\n���� ���\n");
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
		printf("%s �л��� ���� : %d\n", p[i].name, p[i].sum);
	}

	return 0;
}