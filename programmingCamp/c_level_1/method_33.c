#include "method.h"
#define N 100

int problem_33() {
	char word[N];
	char *p;
	int count = 0;
	p = word;
	
	printf("����ڰ� �Է��� ���ڿ����� ���ĺ� ���ڸ� ���� ���α׷�\n");
	printf("���ڿ� �Է� : ");
	gets(word);
	while(*p != '\0') {
		*p = tolower(*p);
		if(*p >= 'a' && *p<='z') {
			count++;
		}
		p++;
	}

	printf("���ĺ� ���ڼ� : %d\n", count);

	return 0;
}