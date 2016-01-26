#include"method.h"
#include<stdio.h>
int mystrlen(char* str){
	int i, length = 0;
	for(i = 0 ; *(str + i) != NULL ; i++){
		length++;
	}
	return length;
}
int mystrcmp(char* str1, char* str2){
	int i, compare_value = 0;
	for(i = 0 ; *(str1 + i) != NULL && *(str2 + i) != NULL ; i++){
		if(*(str1 + i) == *(str2 + i)){
			continue;
		} else if(*(str1 + i) > *(str2 + i)){
			compare_value = 1;
		} else{
			compare_value = -1;
		}
	}
	if(compare_value == 0){
		if(mystrlen(str1) == mystrlen(str2)){
			compare_value = 0;
		} else if(mystrlen(str1) > mystrlen(str2)){
			compare_value = 1;
		} else{
			compare_value = -1;
		}
	}
	return compare_value;
}
void mystrcopy(char* src_str, char* dst_str){
	int i;
	for(i = 0 ; *(src_str + i) != NULL ; i++){
		*(dst_str +i) = *(src_str + i);
	}
}
void mystrcat(char* str1, char* str2){
	int i, j = 0;

	for(i = mystrlen(str1) ; *(str2 + j) != NULL ; i++, j++){
		*(str1 + i) = *(str2 + j);
	}
}
int problem_16(){
	char str1[80] = "", str2[80] = "", str3[80] = "";
	printf("문자열을 입력하세요\n");
	printf("1 >> ");
	gets(str1);
	printf("2 >> ");
	gets(str2);

	printf("str1.length >> %d\n", mystrlen(str1));
	printf("str2.length >> %d\n", mystrlen(str2));

	switch(mystrcmp(str1, str2)){
	case 0:
		printf("두 문자열의 길이는 같습니다\n");
		break;
	case 1:
		printf("더 큰 문자 >> %s\n", str1);
		break;
	case -1:
		printf("더 큰 문자 >> %s\n", str2);
		break;
	}
	mystrcopy(str1, str3);
	printf("복사된 문자열 >> %s\n", str3);

	mystrcat(str1, str2);
	printf("합쳐진 문자열 >> %s\n", str1);

	return 0;
}