#include "method.h"
#define N 10


void print_array(int *p, int n) {
	int i;
	for(i = 0 ; i < n ; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
}

double compute_avg(int *p, int n) {
	int sum = 0, i;
	for(i = 0 ; i < n ; i++) {
		sum += *(p + i);
	}

	return (double) sum / n;
}

int find_max(int *p, int n) {
	int max = 0, i;
	for(i = 0 ; i < n ; i++) {
		if(max < *(p + i)){
			max = *(p + i);
		}
	}
	return max;
}

int find_min(int *p, int n) {
	int min = *p, i;
	for(i = 0 ; i < n ; i++) {
		if(min > *(p + i)){
			min = *(p + i);
		}
	}
	return min;
}

int problem_122() {
	int arr[N] = { 10, 30, 5, 20, 44, 3, 100, 88, 9, 101 };
	
	print_array(arr, N);
	printf("평균 = %lf\n", compute_avg(arr, N));
	printf("최대 = %d\n", find_max(arr, N));
	printf("최소 = %d\n", find_min(arr, N));

	return 0;	
}