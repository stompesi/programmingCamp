#include "method.h"
#define SIZE 10
void sorting(int*);

/*
*	오름차순 정렬후 출력
*/

int problem_6(){
	int arr[SIZE] = {23, 45, 12, 34, 65, 25, 89, 61, 26, 11};

	sorting(arr);

	return 0;
}

void sorting(int *arr){
	int i, j, temp=0;

	for(i=0; i<SIZE; i++){
		for(j=0; j<SIZE-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for(i=0; i<SIZE; i++){
		printf("%3d", arr[i]);
	}
	putchar('\n');
}