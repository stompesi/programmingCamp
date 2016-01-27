#include"method.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Link{
	char name[20];
	char phone_number[20];
	struct Link* next_node;
}Phone_Book;

void insert_node(Phone_Book **head, Phone_Book** last_node, Phone_Book *new_node){
	if(*head == NULL){
		*head = new_node;
		*last_node = new_node;
		new_node->next_node = NULL;
	} else {
		(*last_node)->next_node = new_node;
		*last_node = new_node;
		new_node->next_node = NULL;
	}
}
Phone_Book* search_node(Phone_Book* head, char* name){
	Phone_Book* p_head;
	for(p_head = head ; ; p_head = p_head->next_node){
		if(strcmp(p_head->name, name) == 0){
			return p_head;
		}
		if(p_head->next_node == NULL){
			return NULL;
		}
	}
	return NULL;
}
void show_all(Phone_Book* head){
	Phone_Book* p_head;
	for(p_head = head ; ; p_head = p_head->next_node){
		printf("이름 >> %s\n번호 >> %s\n", p_head->name, p_head->phone_number);
		if(p_head->next_node == NULL){
			break;
		}
	}
}
int problem_55(){
	Phone_Book* node;
	Phone_Book* last_node;
	Phone_Book* head = NULL;
	char temp_string[20];
	int menu;
	do{
		printf("1. 삽입\n2. 탐색\n3. 출력\n4. 종료\n");
		scanf("%d", &menu);
		switch(menu){
		case 1:
			node = (Phone_Book*)malloc(sizeof(Phone_Book));
			printf("이름 >> ");
			scanf("%s", node->name);
			printf("전화번호 >> ");
			scanf("%s", node->phone_number);
			insert_node(&head,&last_node, node);
			break;
		case 2:
			printf("검색할 이름 >> ");
			scanf("%s", temp_string);
			node = search_node(head, temp_string);
			if(node != NULL){
				printf("이름 >> %s\n번호 >> %s\n", node->name, node->phone_number);
			} else{
				printf("찾지 못함\n");
			}
			break;
		case 3:
			show_all(head);
			break;
		case 4:
			break;
		default:
			printf("올바르게 입력해\n");
			break;
		}
	}while(menu != 4);
	return 0;
}