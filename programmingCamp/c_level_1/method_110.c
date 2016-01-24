#include "method.h"

int problem_110() {
	int i, sum = 0;
	int count = 1;

	for(i = 1 ; i <= 100 ; i++) {
		if(i % 2 != 0) {
			sum += i;
		}
	}
	printf("for문 이용 : %d\n", sum);

	sum = 0;
	while(count <= 100) {
		if(count % 2 != 0) {
			sum += count;
		}
		count++;
	}
	printf("while문 이용 : %d\n", sum);

	count = 1;
	sum = 0;

	do {
		if(count % 2 != 0) {
			sum += count;
		}
		count++;
	} while(count <= 100);
	printf("do-while문 이용 : %d\n", sum);
	
	return 0;
}