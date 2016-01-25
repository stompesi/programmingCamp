#include "method.h"

/*
*	공백포함 문자열을 입력받고
*	중복되는 문자는 하나만 출력하도록 프로그램을 작성
*/

int problem_81(){
	char in[100], out[100]={'\0'}, temp;
	int i, j, confirm = 0, count = 0;

	printf("입력 : ");
	gets(in);

	temp = in[0];
	out[count++] = temp;
	for(i = 1; ; i++){
		confirm = 0;
		if(in[i] == '\0'){
			break;
		}
		else {
			temp = in[i];
			for(j=0;j < count;j++){
				if(out[j] == temp){
					confirm = 1;		//중복있다는 플래그
				}
			}
			if(confirm == 0){
				out[count++] = temp;
			}
		}
	}

	printf("%s\n", out);

	return 0;
}