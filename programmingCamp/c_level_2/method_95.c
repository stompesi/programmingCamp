#include "method.h"

int problem_95() {
	char name[20], phone[20];
	int count = 1;
	FILE *fp;

	fp = fopen("sample.txt", "r");
	if(fp == NULL) {
		printf("파일 오픈 실패\n");
		exit(0);
	}
	
	while(1) {
		if(fscanf(fp, "%s %s\n", name, phone) == -1) {
			break;
		}
		printf("(%d) 이름 : %s  전화번호 : %s\n", count++, name, phone);
	}
	
	return 0;
}