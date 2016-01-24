#include "method.h"
#define N 10

int problem_31() {
	char name[N][7];
	char temp[7];
	int i, j;

	for( i = 0 ; i < N ; i++) {
		printf("%d번째 이름입력 : ", i + 1);
		scanf("%s", &name[i]);
	}

	for( i = 0 ; i < N ; i++) {
		for(j = 0 ; j < N - 1; j++) {
			if(strcmp(name[i], name[j]) == -1) {
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}

	printf("정렬된 순서 : ");
	for( i = 0 ; i < N ; i++) {
		printf("%s ", name[i]);
	}
	printf("\n");
}