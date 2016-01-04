/**
* @file method_38.cpp
* @author �Ѽ����б� ��ǻ�Ͱ��а� ������(jinhuk1313@gmail.com)	
* @brief 2016 ���� �ڵ� ķ�� C++ Level.1 ���� 38
*/
#include"method.h"

class Seat {
	bool aReservedSeat;
	int aSeatId;
	string aName;
public:
	Seat();
	void SetReserveSeat(bool reserved);
	bool GetReserveSeat();
	string GetName();
	void SetName(string name);
	void SetId(int id);
	int GetId();
	void InitSeat();
};
void Seat::InitSeat() {
	aName = "";
	aReservedSeat = false;
}
void Seat::SetReserveSeat(bool reserved) {
	this->aReservedSeat = reserved;
}
bool Seat::GetReserveSeat() {
	return this->aReservedSeat;
}
Seat::Seat() {
	aName = "";
	aSeatId = 0;
	aReservedSeat = false;
}
string Seat::GetName() {
	return this->aName;
}
void Seat::SetName(string name) {
	this->aName = name;
}
void Seat::SetId(int id) {
	this->aSeatId= id;
}
int Seat::GetId() {
	return this->aSeatId;
}

class Library {
	Seat aSeat[32];
	int aSeatCount;
public:
	Library();
	void RunSystem();
	void ReserveSeat();
	void SearchSeat();
	void CancelSeat();
	void ShowSeat();
};

void Library::RunSystem() {
	int input;
	do {	
		ShowSeat();
		cout << "1. ����\t\t2. ��ȸ\t\t3. ���\t\t4. ����" << endl;
		cout << "�޴��� �Է��ϼ���>>";
		cin >> input;
		switch(input) {
		case 1:
			ReserveSeat();
			break;
		case 2:
			SearchSeat();
			break;
		case 3:
			CancelSeat();
			break;
		case 4:
			cout << "�ý����� ����˴ϴ�." << endl;
			break;
		default:
			cout << "�Է��� �ٸ��� �ʽ��ϴ�" << endl;
			break;
		}
	} while(input!= 4);
}
void Library::CancelSeat() {
	int seat_id;
	string name;
	
	cout << "3. �� ��" << endl;
	cout << "����� ��ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()) {
		cout << "�̸��� �Է��ϼ���>> ";
		getline(cin, name, '\n');
		if(!aSeat[seat_id-1].GetName().compare(name)) {
			aSeat[seat_id-1].InitSeat();
			cout << "������ ��ҵǾ����ϴ�." << endl;
		} else {
			cout << "�̸��� �ùٸ��� �ʽ��ϴ�." << endl;
		}
	} else {
		cout << "����Ǿ� ���� �ʱ� ������ ����� �� �����ϴ�." << endl;
	}
}
void Library::SearchSeat() {
	int seat_id;
	
	cout << "2. �� ȸ" << endl;
	cout << "��ȸ�� �¼���ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()){
		cout << "�� �ڸ��� " << aSeat[seat_id-1].GetName() << "���� �����ϼ̽��ϴ�." << endl;
	}else{
		cout << "�� �ڸ��� ������ϴ�." << endl;
	}
}
Library::Library() {
	cout << "\t\t������ �¼� ���� �ý���" << endl;
	aSeatCount = sizeof(aSeat) / sizeof(Seat);
	for(int i = 0; i < aSeatCount ; i++) {
		aSeat[i].SetId(i+1);
	}
}
void Library::ReserveSeat() {
	int seat_id;
	string name;
	
	cout << "1. �� ��" << endl;
	cout << "�¼� ��ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()) {
		cout << "�̹� ����� �¼��Դϴ�." << endl;
	} else {
		cout << "����Ͻ� �� �̸��� �Է��� �ּ���>> ";
		getline(cin,name,'\n');
		aSeat[seat_id-1].SetName(name);
		aSeat[seat_id-1].SetReserveSeat(true);
		cout << "������ �Ϸ�Ǿ����ϴ�," << endl;
	}
}
void Library::ShowSeat() {
	for(int i = 0 ; i < aSeatCount ; i++) {
		if(!aSeat[i].GetName().compare("")) {
			cout << aSeat[i].GetId() << ".--------  \t\t";
		} else {
			cout << aSeat[i].GetId() << "." << aSeat[i].GetName() << "  \t\t";
		}
		if((1 + i) % 3 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

void Effector::Problem38() {
	Library hansungLibrary;
	hansungLibrary.RunSystem();
}