#include "method.h"

typedef struct {
	char author[100];
	char title[100];
	char year[5];	
} Book;

void print_HTML(Book* book, int size);

int problem_44() {
	int input_count, i;
	Book* p_book;

	printf("�Է� ���� ��� ���� >> ");
	scanf("%d", &input_count);
	p_book = (Book*)malloc(sizeof(Book)*input_count);
	for (i = 0; i < input_count; i++) {
		printf("���ڸ� >> ");
		scanf("%s", (p_book + i)->author);
		printf("å �̸� >> ");
		scanf("%s", (p_book + i)->title);
		printf("���ǿ��� >> ");
		scanf("%s", (p_book + i)->year);	
	}
	print_HTML(p_book, input_count);
	free(p_book);
	return 0;
}

void print_HTML(Book* book, int size) {
	int i;

	printf("<html>\n");
	printf("\t<head><title>���� �����ϴ� å��</title></head>\n");
	printf("\t<body>\n");
	printf("\t\t<ul>\n");
	
	for (i = 0; i < size; i++) {
		printf("\t\t\t<li> %s, <em>%s</em>, %s</li>\n", (book + i)->author, (book + i)->title, (book + i)->year);	
	}
	printf("\t\t</ul>\n");
	printf("\t</body>\n");
	printf("</html>\n");
}

