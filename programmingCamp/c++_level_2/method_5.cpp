/**
* @file method_38.cpp
* @author 한성대학교 컴퓨터공학과 강진혁(jinhuk1313@gmail.com)	
* @brief 2016 동계 코딩 캠프 C++ Level.1 문제 38
* @details 문제에서 주어진 main 함수는 그대로 가져다 쓰고, 문제에서 요구한 부분은 이진 탐색 트리를 이용하여 구현하였습니다. 
*/
#include<stdlib.h>
#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>
#include"method.h"
using namespace std;

class itemEntry{
public:
	float aUnitPrice;
	int aCopies;
	string aName;
	string aCompany;
	itemEntry(string itemName, string company,int copies, float unitPrice);
	itemEntry* apLeftNode;
	itemEntry* apRightNode;
};
itemEntry::itemEntry(string itemName, string company,int copies, float unitPrice){
	this->aName = itemName;
	this->aCompany = company;
	this->aCopies = copies;
	this->aUnitPrice = unitPrice;
	this->apLeftNode = NULL;
	this->apRightNode = NULL;
}


class Store{
	int aNumItem;
	itemEntry* apRoot;
public:
	Store(){apRoot = NULL;	aNumItem = 0;}
	void InsertItem( string itemName, string company, int copies ,float unitPrice);
	void DeleteItem( string itemName);
	itemEntry *Search(string itemName);
	void UpdateItem(string itemName, int total, float unitPrice);
	void PreOrder(itemEntry* pRoot,itemEntry** ppItem, string itemName);
};
void Store::InsertItem( string itemName, string company, int c, float p){
	itemEntry *pNewItem = new itemEntry(itemName, company, c, p);
	itemEntry *pPresentNode = this->apRoot;
	itemEntry *pParentNode = NULL;
	if(pPresentNode == NULL){
		this->apRoot = pNewItem;
	}else{
		while(pPresentNode != NULL){
			if(pPresentNode->aName.compare(pNewItem->aName) == 1){
				pParentNode = pPresentNode;
				pPresentNode = pPresentNode->apLeftNode;
			}else if(pPresentNode->aName.compare(pNewItem->aName) == -1){
				pParentNode = pPresentNode;
				pPresentNode = pPresentNode->apRightNode;
			}else if(pPresentNode->aName.compare(pNewItem->aName) ==  0 ){
				cout<<"Item exist in database"<<endl;
				delete pNewItem;
				return;
			}
		}
		if(pParentNode->aName.compare(pNewItem->aName) == 1){
			pParentNode->apLeftNode = pNewItem;
		}else{
			pParentNode->apRightNode = pNewItem;
		}
	}
}

void Store::DeleteItem(string itemName){
	itemEntry* pItem = this->Search(itemName);
	if(pItem == NULL){
		cout<<"item not found";
		return;
	}else{
		if(pItem->aCopies == 0){
			cout<<"Item Deleted Failure"<<endl;
		}else{
			pItem->aCopies--;
			cout<<"item Deleted Successfully"<<endl;
		}
	}
}

itemEntry *Store::Search(string itemName){
	itemEntry* pItem = NULL;
	itemEntry* pRoot = this->apRoot;
	PreOrder(pRoot, &pItem,itemName);
	return pItem;
}
void Store::PreOrder(itemEntry* pRoot,itemEntry** ppItem, string itemName){
	itemEntry *pItem = pRoot;
	if(pRoot){
		if(pRoot->aName.compare(itemName) == 0){
			*ppItem = pItem;
		}else{
			PreOrder(pRoot->apLeftNode, ppItem, itemName);
			PreOrder(pRoot->apRightNode, ppItem, itemName);
		}
	}
}
void Store::UpdateItem(string itemName, int total, float price){
	itemEntry* pItem = this->Search(itemName);
	if(pItem == NULL){
		cout<<"item not found";
		return;
	}else{
		pItem->aCopies += total;
		pItem->aUnitPrice = price;
	}
}

void Effector::Problem5(){
	Store store;
	string option("x");
	string name,company, copies, unit_price;
	itemEntry *pItem;

	system("cls");
	while( option.at(0) != 'e' ){
		cout << "\n----------->Enter your choice:<------------\n";
		cout << "I for insert\n";
		cout << "D for delete\n";
		cout << "S for search\n";
		cout << "U for update\n";
		cout << "E for exit\n";

		getline(cin, option, '\n');
		switch( option.at(0))
		{
		case 'i':
			cout << "Enter Name of Item, Company and no of copies,Unit price  per line:\n";
			getline(cin, name, '\n');
			getline(cin, company,'\n');
			getline(cin, copies, '\n');
			getline(cin, unit_price, '\n');
			store.InsertItem( name, company, stoi(copies),stof(unit_price));
			break;
		case 'd':
			cout << "Enter Name of Item:\n";
			getline(cin, name, '\n');
			store.DeleteItem(name);
			break;
		case 's':
			cout << "Enter Name of Item:\n";		getline(cin, name, '\n');
			pItem = store.Search( name );
			if( pItem != NULL){
				cout<<"---------------->Searching Result<---------------------" <<endl;
				cout << "Item found\n" <<"Name of the Item:"<< pItem->aName << endl 
					<<"Company name:"<< pItem->aCompany << endl 
					<<"Number of copies available:"<< pItem->aCopies << endl
					<<"Unit price:"<<pItem->aUnitPrice << endl;
			}else{
				cout << "Item not found\n";
			}
			break;
		case 'u':
			cout << "Enter details for update...\n";
			cout << "Enter name: ";					getline(cin, name, '\n');
			cout << "Enter total new entry: ";		getline(cin, copies, '\n');
			cout << "Enter new price: ";			getline(cin, unit_price, '\n');
			store.UpdateItem(name, stoi(copies), stof(unit_price));
			break;
		}
	}
}








