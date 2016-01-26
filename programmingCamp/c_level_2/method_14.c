#include "method.h"

void merge(int a[], int b[]);

int problem_14() {
	int a[5] = { 1,2,4,6,9 };
	int b[5] = { 3,5,7,8,10 };
	int i;

	printf("a[5] = {");
	for (i = 0; i < 4; i++) {
		printf("%d, ", a[i]);
	}
	printf("%d}\n", a[i]);

	printf("b[5] = {");
	for (i = 0; i < 4; i++) {
		printf("%d, ", b[i]);
	}
	printf("%d}\n", b[i]);

	merge(a, b);

	return 0;
}

void merge(int a[], int b[]) {
	int c[10];
	int index_a = 0, index_b = 0, index_c = 0;

	while(index_c < 10) {
		if(a[index_a] < b[index_b]) {
			c[index_c] = a[index_a];
			index_a++;
			if(index_a == 5) {
				while(index_b < 5) {
					index_c++;
					c[index_c] = b[index_b];
					index_b++;
				}
				break;
			}
		}
		else if(a[index_a] >= b[index_b]) {
			c[index_c] = b[index_b];
			index_b++;
			if(index_b == 5) {
				while(index_a < 5) {
					index_c++;
					c[index_c] = a[index_a];
					index_a++;
				}
				break;
			}
		}
		index_c++;
	}

	printf("Ãâ·Â: ");
	for(index_c = 0; index_c < 9; index_c++) {
		printf("%d, ", c[index_c]);
	}
	printf("%d\n", c[index_c]);
}