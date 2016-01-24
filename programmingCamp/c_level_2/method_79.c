#include"method.h"
#include<string.h>
#include<stdio.h>
int problem_79(){
	char input_string[21];
	int i, j, length;
	printf("¹®ÀÚ¿­ : ");
	scanf("%s", input_string);
	for(i = 0 ; input_string[i] != NULL ; i++){
		for(j = 0 ; j <= i ; j++){
			printf("%c", input_string[j]);
		}
		printf("\n");
	}
	length = i;
	for(i = length-1 ; i >= 0 ; i--){
		printf("%c", input_string[i]);
	}
	printf("\n");
	return 0;
}