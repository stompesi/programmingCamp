#include"method.h"
#include<math.h>
#include<stdio.h>
#define PI 3.141592
void problem_19(){
	int i, j;
	double sin_value;
	for(i = 0 ; i <= 360 ; i += 15){
		sin_value = sin((PI * i) /180.0);
		printf("sin(%3d)= %.2f", i, sin_value);
		for(j = 0 ; j < (sin_value * 10)+10 ; j++){
			printf(" ");
		}
		printf("*\n");
	}
}