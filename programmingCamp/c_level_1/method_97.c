#include "method.h"

typedef struct Person{
	char name[11];
	char phone_number[14];
	char address[100];
}person;

int problem_97() {
	int size, i;
	person *p;

	printf("��� �� �Է� : ");
	scanf("%d", &size);

	p = (person *) malloc(sizeof(person) * size);

	for( i = 0 ; i < size ; i++) {
		fflush(stdin);
		printf("%d) �̸� : ", i+1); 
		gets(p[i].name);
		fflush(stdin);
		printf("%d) ��ȭ��ȣ : ", i + 1); 
		gets(p[i].phone_number);
		fflush(stdin);
		printf("%d) �ּ� : ", i + 1); 
		gets(p[i].address);
	}

	printf("\t�� ��\t�� ȭ �� ȣ\t\t�� ��\n");

	for( i = 0 ; i < size ; i++) {
		printf("%13s %8s %17s\n", p[i].name, p[i].phone_number, p[i].address);
	}

	return 0;
}