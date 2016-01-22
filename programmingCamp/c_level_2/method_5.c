#include "method.h"

#define MAX 10

int search(int array[], int number);

int problem_5() {
	int array[MAX] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
	int number, index;

	printf("배열에서 임의의 값의 위치를 찾아내는 프로그램.\n");

	printf("찾고자하는 값 : ");
	scanf("%d", &number);
	
	index = search(array, number);
	if (index == -1) {
		printf("%d이 배열에 없습니다.\n", number);
	}
	else {
		printf("요소의 위치 : %d\n", index);
	}

	return 0;	
}

// 배열과 찾고자하는 값을 넘겨주면 값의 위치를 반환해준다.
// 없으면 -1을 반환.
int search(int array[], int number) {
	int i;

	for (i = 0; i < MAX; i++) {
		if (array[i] == number) {
			return i;
		}
	}

	return -1;
}

