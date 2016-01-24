#include "method.h"
#define N 100

int problem_93() {
	char word[N];
	char yes[4] = "yes", no[3] = "no";
	char maybe[30] = "Maybe. Rephrase the question";
	int index = 0;

	printf("질문 답변 프로그램\n");
	
	while(1) {
		printf("질문을 입력하세요 : ");
		gets(word);

		index = strlen(word) % 3;

		if(index == 0) {
			printf("답변 : %s\n", yes);
		} else if(index == 1) {
			printf("답변 : %s\n", no);
		} else if(index == 2) {
			printf("답변 : %s\n", maybe);
		} else {
			continue;
		}
	}
	return 0;
}