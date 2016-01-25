#include "method.h"

/*
*	문자열 관련 함수 사용 및
*	문자열 순서 바꾸는 함수 작성
*/
void reverse(char from[], char to[]);

int problem_84(){
	char str1[100];
	char str2[100];
	char str3[100] = {'\0'};
	char str4[100] = {'\0'};
	char temp[100];
	int len1, len2, len3, len4;

	printf("(1)	입력 str1 : ");
	scanf("%s", str1);
	printf("	입력 str2 : ");
	scanf("%s", str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("(2)	교환 str1=%s str2=%s\n", str1, str2);

	len1 = strlen(str1);
	len2 = strlen(str2);
	printf("len1=%d len2=%d\n", len1, len2);

	strcpy(str3, str2);
	printf("(3)	복사 str3=%s\n", str3);

	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer Engineering\0");
	printf("(4)	이어붙이기 str3=%s\n", str3);

	len3 = strlen(str3);
	printf("len3=%d\n", len3);

	reverse(str3, str4);
	printf("(5)	뒤집기 str4=%s\n", str4);

	len4 = strlen(str4);
	printf("len4=%d\n", len4);

	return 0;
}
void reverse(char from[], char to[]){
	int size = strlen(from), i;

	for(i = 0; i < size; i++){
		to[i] = from[(size - 1) - i];
	}
}