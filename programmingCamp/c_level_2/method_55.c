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
		printf("�̸� >> %s\n��ȣ >> %s\n", p_head->name, p_head->phone_number);
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
		printf("1. ����\n2. Ž��\n3. ���\n4. ����\n");
		scanf("%d", &menu);
		switch(menu){
		case 1:
			node = (Phone_Book*)malloc(sizeof(Phone_Book));
			printf("�̸� >> ");
			scanf("%s", node->name);
			printf("��ȭ��ȣ >> ");
			scanf("%s", node->phone_number);
			insert_node(&head,&last_node, node);
			break;
		case 2:
			printf("�˻��� �̸� >> ");
			scanf("%s", temp_string);
			node = search_node(head, temp_string);
			if(node != NULL){
				printf("�̸� >> %s\n��ȣ >> %s\n", node->name, node->phone_number);
			} else{
				printf("ã�� ����\n");
			}
			break;
		case 3:
			show_all(head);
			break;
		case 4:
			break;
		default:
			printf("�ùٸ��� �Է���\n");
			break;
		}
	}while(menu != 4);
	return 0;
}