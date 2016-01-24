#include "method.h"

typedef struct Person{
	char name[11];
	char phone_number[14];
	char address[100];
}person;

int problem_97() {
	int size, i;
	person *p;

	printf("사람 수 입력 : ");
	scanf("%d", &size);

	p = (person *) malloc(sizeof(person) * size);

	for( i = 0 ; i < size ; i++) {
		fflush(stdin);
		printf("%d) 이름 : ", i+1); 
		gets(p[i].name);
		fflush(stdin);
		printf("%d) 전화번호 : ", i + 1); 
		gets(p[i].phone_number);
		fflush(stdin);
		printf("%d) 주소 : ", i + 1); 
		gets(p[i].address);
	}

	printf("\t이 름\t전 화 번 호\t\t주 소\n");

	for( i = 0 ; i < size ; i++) {
		printf("%13s %8s %17s\n", p[i].name, p[i].phone_number, p[i].address);
	}

	return 0;
}