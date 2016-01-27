#include"method.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char author[100];
	char title[100];
	char year[5];
}Book;

int problem_43() {
	int input_count,i;
	Book* p_book;
	printf("입력 도서 목록 개수 >> ");
	scanf("%d", &input_count);
	p_book = (Book*)malloc(sizeof(Book) * input_count);
	for(i = 0 ; i < input_count ; i++){
		printf("저자명 >> ");
		scanf("%s", (p_book + i)->author);
		printf("책 이름 >> ");
		scanf("%s", (p_book + i)->title);
		printf("출판연도 >> ");
		scanf("%s", (p_book + i)->year);
	}
	for(i = 0 ; i < input_count ; i++) {
		printf("%s, %s, %s\n", (p_book + i)->author, (p_book + i)->title, (p_book + i)->year);
	}
	free(p_book);
	return 0;
}