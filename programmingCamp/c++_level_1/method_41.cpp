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
		cout << "å ���� : " << aName << endl;
		cout << "���� : " << aAuthor << endl;
		cout << "���ǻ� : " << aPublisher << endl;
		cout << "�Ⱓ�⵵ : " << aPublishYear << endl;
		if (aIsBorrowed) {
			cout << "�뿩��" << endl;
		}
		else {
			cout << "�뿩����" << endl;
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

	cout << "å ���� : ";
	getline(cin, name);
	cout << "���� : ";
	getline(cin, author);
	cout << "���ǻ� : ";
	getline(cin, publisher);
	cout << "�Ⱓ�⵵ : ";
	getline(cin, year);
	
	Book_41 book(name, author, publisher, year);
	aBooks.push_back(book);
}
void Library_41::Search() {
	string name;

	cout << "�˻� �� å ���� : ";
	getline(cin, name);

	for (int i = 0; i < aBooks.size(); i++) {
		if (aBooks[i].GetName() == name) {
			aBooks[i].Show();
			return;
		}
	}
	cout << "�˻��Ͻ� å�� �����ϴ�." << endl;
}
void Library_41::Borrow() {
	string name;

	cout << "�뿩 �� å ���� : ";
	getline(cin, name);

	for (int i = 0; i < aBooks.size(); i++) {
		if (aBooks[i].GetName() == name) {
			if (!aBooks[i].IsBorrowed()) {
				cout << "�뿩 �Ϸ�." << endl;
				aBooks[i].SetBorrowed(true);
				return;
			}
			else {
				cout << "�뿩 ���� å�Դϴ�." << endl;
				return;
			}
			break;
		}
	}
	cout << name << "�� �������� �ʽ��ϴ�." << endl;
}
void Library_41::RunSystem() {
	int input;
	do {
		cout << "1. �԰�\t\t2. �˻�\t\t3. �뿩\t\t4. ����" << endl;
		cout << "�޴��� �Է��ϼ���>>";
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
			cout << "�ý����� ����˴ϴ�." << endl;
			break;
		default:
			cout << "�Է��� �ٸ��� �ʽ��ϴ�" << endl;
			break;
		}
	} while (input != 4);
}

void Effector::Problem41() {
	Library_41 library;
	library.RunSystem();
}