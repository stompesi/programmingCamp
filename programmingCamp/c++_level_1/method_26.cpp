#include "method.h"

class Book {
	char *title;
	int price;
public:
	Book(char *title, int price) {
		this->title = new char[strlen(title) + 1];
		strcpy(this->title, title);
		this->price = price;
	}
	Book(Book& book) {
		this->title = new char[strlen(book.title) + 1];
		strcpy(this->title, book.title);
		this->price = price;
	}
	~Book() {
		delete title;
	}
	void Set(char *title, int price) {
		strcpy(this->title, title);
		this->price = price;
	}
	void Show() {
		cout << title << ' ' << price << "��" << endl;
	}
};

void Effector::Problem26() {
	Book cpp("��ǰ C++", 10000);
	Book java = cpp;
	java.Set("��ǰ�ڹ�", 12000);
	cpp.Show();
	java.Show();
}
