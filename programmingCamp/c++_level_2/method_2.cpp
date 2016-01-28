#include"method.h"

#define DOWN_MAX 10

class User {
	string aName;
	string aId;
	string aPasswd;
	string aPhone;
	string aGrade;
	int aUsePeriod;
	int aDownloadCount;
	vector<string> aDownloadList;
public :
	void InitUser(string name, string id, string passwd, string phone, string grade, int period) {
		this->aName = name;
		this->aId = id;
		this->aPasswd = passwd;
		this->aPhone = phone;
		this->aGrade = grade;
		this->aUsePeriod = period;
		this->aDownloadCount = 0;
	}
	void Print();
	void Download(string file_name);
};

void User::Print() {
	cout << "�̸� : " << aName << endl;
	cout << "ID : " << aId << endl;
	cout << "��й�ȣ : " << aPasswd << endl;
	cout << "��ȭ��ȣ : " << aPhone << endl;
	cout << "��� : " << aGrade << endl;
	cout << "��� ��ȿ �Ⱓ : " << aUsePeriod << endl;
	if (aGrade == "����") {
		cout << "�ٿ�ε� ���� ���." << endl;
		for (int i = 0; i < aDownloadCount; i++) {
			cout << i + 1 << ". " << aDownloadList[i] << endl;
		}
		cout << "�ٿ�ε� ���� ���� : " << DOWN_MAX - aDownloadCount << endl;
	}
}

void User::Download(string file_name) {
	cout << "file_name downloading ... " << endl;
	aDownloadCount++;
	aDownloadList.push_back(file_name);
}

void Effector::Problem2() {
	User users[3];
	string name, id, passwd, phone, grade;
	int period, i;

	for(i = 0; i < 3; i++) {
		cout << "ȸ�������Է� " << i+1 << "." << endl;
		cout << "�̸� : ";
		cin >> name;
		cout << "ID : ";
		cin >> id;
		cout << "��й�ȣ : ";
		cin >> passwd;
		cout << "��ȭ��ȣ : ";
		cin >> phone;
		cout << "���(����, ����) : ";
		cin >> grade;
		cout << "��� ��ȿ �Ⱓ : ";
		cin >> period;
		users[i].InitUser(name, id, passwd, phone, grade, period);
		cout << endl;
	}

	cout << "ȸ������ ���." << endl;
	for (i = 0; i < 3; i++) {
		users[i].Print();
	}
	cout << endl;
	
	users[0].Download("�ٶ��� �д�.");
	users[0].Download("�̹� ���� ���.");
	users[0].Download("�߰���.");
	users[0].Download("Rain Drop.");
	users[0].Download("�̸��Ÿ�ũ��������.");
	users[0].Download("������.");
	users[0].Download("�ܼҸ�.");
	cout << endl;

	cout << "ȸ������ ���." << endl;
	for (i = 0; i < 3; i++) {
		users[i].Print();
	}
}


