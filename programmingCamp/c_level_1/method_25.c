#include "method.h"

int problem_25() {
	int i, n;
	int frequency[10] = { 0 };
	srand(time(NULL));

	printf("1~9������ ���� 100���� ������ �̿��ؼ� \n���� �� �� ������ �󵵼��� ���ϴ� ���α׷�\n");
	printf("==========================================\n");
	
	for(i = 1 ; i <= 100 ; i++) {
		n = rand() % 9 + 1;
		frequency[n]++;
		printf("%4d", n);
		
		if(i % 10 == 0) {
			printf("\n");
		}
	}
	
	printf("==========================================\n");
	
	for(i = 1 ; i < 10 ; i++) {
		printf("%2d�� �󵵼� : %d\n", i, frequency[i]);
	}
	printf("==========================================\n");

	return 0;
}