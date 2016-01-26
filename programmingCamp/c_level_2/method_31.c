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
	printf("< �� �� >\n");
	for(i = 0 ; i < 10 ; i++){
		printf("[%d] = %d\n", i, *(hist+i));
	}
}
int problem_31(){
	int input_value, count = 0;
	int histogram[10] = {0,};
	printf("0���� 9������ ������ �Է��մϴ�.\n");
	while(count < 20){
		printf("%d >> ", count +1);
		scanf("%d", &input_value);
		if(invalid_input(input_value)){
			count++;
			histogram[input_value]++;
		} else{
			printf("�Է� ����. 0-9������ ������ �Է��մϴ�.\n");
		}
	}
	show_hist(histogram);

	return 0;
}