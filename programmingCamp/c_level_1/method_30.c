#include "method.h"
#define N 10

int problem_30() {
	int a[N] = { 15, 18, 10, 4, 27, 5, 32};
	int count = 0, i, j;
	int temp = 0, median = 0;

	for( i = 0 ; i < N ; i++) {
		if(a[i] != 0) {
			count++;
		}
	}

	for( i = 0 ; i < count; i++) {
		for(j = 0 ; j < count - 1; j++) {
			if(a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for( i = 0 ; i < count; i++) {
		printf("%d ", a[i]);
	}

	if(count % 2 == 1) {
		median = a[count / 2];
	} else {
		median = (a[count / 2] + a[(count / 2) + 1]) / 2;
	}

	printf("\nmedian = %d\n", median);

	return 0;
}