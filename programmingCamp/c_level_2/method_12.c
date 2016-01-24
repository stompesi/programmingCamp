#include "method.h"
#define SIZE 10

/*
*	10개의 정수 입력 받고 버블정렬 후 출력
*/

int problem_12(){
	int i, j, temp, arr[SIZE];

	for(i=0;i<SIZE; i++){
		printf("%d번째 수를 입력하세요 >> ", i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i=0;i<SIZE; i++){
		printf("%4d", arr[i]);
	}
	putchar('\n');

	return 0;
}