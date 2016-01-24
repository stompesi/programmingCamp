#include "method.h"

int problem_92() {
	char word[100];
	int count = 0;

	printf("첫 번째 공백을 찾는 프로그램\n");

	printf("단어를 입력하세요 : ");
	gets(word);

	while(1) {
		if(word[count] == ' ') {
			count++;
			break;
		} else {
			count++;
		}
	}
	
	printf("나머지 출력 : %s\n", &word[count]);

	return 0;
}