#include"method.h"

int invalid_input(int input_value){
	if(input_value >= 0 && input_value <= 9){
		return 1;
	} else {
		return 0;
	}
}
void show_hist(int* hist){
	int i;
	printf("< 결 과 >\n");
	for(i = 0 ; i < 10 ; i++){
		printf("[%d] = %d\n", i, *(hist+i));
	}
}
int problem_31(){
	int input_value, count = 0;
	int histogram[10] = {0,};
	printf("0에서 9까지의 정수를 입력합니다.\n");
	while(count < 20){
		printf("%d >> ", count +1);
		scanf("%d", &input_value);
		if(invalid_input(input_value)){
			count++;
			histogram[input_value]++;
		} else{
			printf("입력 오류. 0-9사이의 정수를 입력합니다.\n");
		}
	}
	show_hist(histogram);

	return 0;
}