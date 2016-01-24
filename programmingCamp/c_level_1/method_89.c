#include "method.h"

int problem_89() {
	char c;
	int count = 1, i, j;
	int n = 0;

	for(i = 1 ; i <= 10; i++) {
		fflush(stdin);
		printf("%d번째 문자 입력 : ", i);
		scanf("%c", &c);

		n = (int) c;

		for(j = 1 ; j <= n ; j++) {
			printf("%c", 'o');
			if(j % 10 == 0) {
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}