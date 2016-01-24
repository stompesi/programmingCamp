#include "method.h"

int problem_96() {
	int end;
	char word[100];
	char max_word[100] = " ";
	int length = 0, max_length = 0, location = 0, temp_location = 0;

	printf("여러 줄에 원하는 문장을 입력하세요. 입력이 다 되었으면\n");
	printf("새로운 줄 처음에 ctrl+z, 그리고 Enter를 입력하세요.\n\n");

	while(EOF != scanf("%d", &end)) {
		gets(word);
		fflush(stdin);
		length = strlen(word);
		temp_location++;

		if(length > max_length) {
			max_length = length;
			strcpy(max_word, word);
			location = temp_location;
		}
	}

	printf("가장 큰 문장 %s 길이 %d 위치 %d\n", max_word, max_length, location);

	return 0;
}