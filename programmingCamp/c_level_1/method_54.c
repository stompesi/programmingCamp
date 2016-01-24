#include "method.h"

int problem_54() {
	char word[100];
	int i, j;
	int count[92] = { 0 };

	printf("문장에서 알파벳과 기타문자 count\n\n");
	printf("문장을 입력하고 Enter\n");
	printf("문장 >> ");
	gets(word);

	for( i = 0 ; i < strlen(word) ; i++) {
		if(islower(word[i])) {
			count[(int)toupper(word[i])]++;
		} else if(isupper(word[i])) {
			count[(int)word[i]]++;
		} else {
			count[91]++;
		}
	}

	printf("\n결과\n");
	printf("알파벳 count\n");

	for(i = 65 ; i <= 91 ; i++) {
		if(count[i] != 0) {
			if(i == 91) {
				printf("%기타\t");
				printf("%d\n", count[i]);
			} else {
				printf("%c\t", (char)i);
				printf("%d\n", count[i]);
			}
		}
	}

	return 0;
}