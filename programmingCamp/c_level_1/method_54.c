#include "method.h"

int problem_54() {
	char word[100];
	int i, j;
	int count[92] = { 0 };

	printf("���忡�� ���ĺ��� ��Ÿ���� count\n\n");
	printf("������ �Է��ϰ� Enter\n");
	printf("���� >> ");
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

	printf("\n���\n");
	printf("���ĺ� count\n");

	for(i = 65 ; i <= 91 ; i++) {
		if(count[i] != 0) {
			if(i == 91) {
				printf("%��Ÿ\t");
				printf("%d\n", count[i]);
			} else {
				printf("%c\t", (char)i);
				printf("%d\n", count[i]);
			}
		}
	}

	return 0;
}