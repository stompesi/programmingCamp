#include"method.h"


int problem_94(){
	FILE * fin;
	char name[20], phone[30];
	fin = fopen("sample.txt", "w");
	printf("�̸� : ");
	scanf("%s", name);
	printf("��ȣ : ");
	scanf("%s", phone);
	fprintf(fin, "%s %s", name, phone);
	fclose(fin);
	return 0;
}
