#include "method.h"

/*
*	�������� ���ڿ��� �Է¹ް�
*	�ߺ��Ǵ� ���ڴ� �ϳ��� ����ϵ��� ���α׷��� �ۼ�
*/

int problem_81(){
	char in[100], out[100]={'\0'}, temp;
	int i, j, confirm = 0, count = 0;

	printf("�Է� : ");
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
					confirm = 1;		//�ߺ��ִٴ� �÷���
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