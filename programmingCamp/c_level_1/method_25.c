#include "method.h"

int problem_25() {
	int i, n;
	int frequency[10] = { 0 };
	srand(time(NULL));

	printf("1~9까지의 숫자 100개를 난수를 이용해서 \n생성 후 각 숫자의 빈도수를 구하는 프로그램\n");
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
		printf("%2d의 빈도수 : %d\n", i, frequency[i]);
	}
	printf("==========================================\n");

	return 0;
}