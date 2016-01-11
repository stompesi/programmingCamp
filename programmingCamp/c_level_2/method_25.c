#include"method.h"
#include<string.h>
#include<stdio.h>
#define MAX_BUF 1024
char* strrev(char* str){
	int str_leng, i, j = 0;
	char dst_str[MAX_BUF] ="";
	str_leng = strlen(str) - 1;
	for( i = str_leng ; j <= str_leng ; i--, j++){
		dst_str[j] = *(str + i);
	}
	return dst_str;
}
void problem_25(){
	char str[30] = "Happy new year!";
	printf("%s\n", strrev(str));

}