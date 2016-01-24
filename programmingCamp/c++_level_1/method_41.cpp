#include"method.h"

class Book_41 {
	string aName;
	string aAuthor;
	string aPublisher;
	string aPublishYear;
	bool aIsBorrowed;
public:
	Book_41(string name, string author, string publisher, string year) {
		this->aName = name;
		this->aAuthor = author;
		this->aPublisher = publisher;
		this->aPublishYear = year;
		this->aIsBorrowed = false;
	}
	string GetName() {
		return aName;
	}
	void SetBorrowed(bool b) {
		this->aIsBorrowed = b;
	}
	bool IsBorrowed() {
		return aIsBorrowed;
	}
	void Show() {
		cout << "책 제목 : " << aName << endl;
		cout << "저자 : " << aAuthor << endl;
		cout << "출판사 : " << aPublisher << endl;
		cout << "출간년도 : " << aPublishYear << endl;
		if (aIsBorrowed) {
			cout << "대여중" << endl;
		}
		else {
			cout << "대여가능" << endl;
		}
	}
};

class Library_41 {
	vector<Book_41> aBooks;
public:
	void Income();
	void Search();
	void Borrow();
	void RunSystem();
};

void Library_41::Income() {
	string name;
	string author;
	string publisher;
	string year;

	cout << "책 제목 : ";
	getline(cin, name);
	cout << "저자 : ";
	getline(cin, author);
	cout << "출판사 : ";
	getline(cin, publisher);
	cout << "출간년도 : ";
	getline(cin, year);
	
	Book_41 book(name, author, publisher, year);
	aBooks.push_back(book);
}
void Library_41::Search() {
	string name;

	cout << "검색 할 책 제목 : ";
	getline(cin, name);

	for (int i = 0; i < aBooks.size(); i++) {
		if (aBooks[i].GetName() == name) {
			aBooks[i].Show();
			return;
		}
	}
	cout << "검색하신 책이 없습니다." << endl;
}
void Library_41::Borrow() {
	string name;

	cout << "대여 할 책 제목 : ";
	getline(cin, name);

	for (int i = 0; i < aBooks.size(); i++) {
		if (aBooks[i].GetName() == name) {
			if (!aBooks[i].IsBorrowed()) {
				cout << "대여 완료." << endl;
				aBooks[i].SetBorrowed(true);
				return;
			}
			else {
				cout << "대여 중인 책입니다." << endl;
				return;
			}
			break;
		}
	}
	cout << name << "은 존재하지 않습니다." << endl;
}
void Library_41::RunSystem() {
	int input;
	do {
		cout << "1. 입고\t\t2. 검색\t\t3. 대여\t\t4. 종료" << endl;
		cout << "메뉴를 입력하세요>>";
		cin >> input;
		cin.ignore(1, '\n');
		switch (input) {
		case 1:
			Income();
			break;
		case 2:
			Search();
			break;
		case 3:
			Borrow();
			break;
		case 4:
			cout << "시스템이 종료됩니다." << endl;
			break;
		default:
			cout << "입력이 바르지 않습니다" << endl;
			break;
		}
	} while (input != 4);
}

void Effector::Problem41() {
	Library_41 library;
	library.RunSystem();
}