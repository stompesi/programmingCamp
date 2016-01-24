#include"method.h"

class Seat_39 {
	bool aReservedSeat;
	int aSeatId;
	string aName;
public:
	Seat_39();
	void SetReserveSeat(bool reserved);
	bool GetReserveSeat();
	string GetName();
	void SetName(string name);
	void SetId(int id);
	int GetId();
	void InitSeat();
};
void Seat_39::InitSeat() {
	aName = "";
	aReservedSeat = false;
}
void Seat_39::SetReserveSeat(bool reserved) {
	this->aReservedSeat = reserved;
}
bool Seat_39::GetReserveSeat() {
	return this->aReservedSeat;
}
Seat_39::Seat_39() {
	aName = "";
	aSeatId = 0;
	aReservedSeat = false;
}
string Seat_39::GetName() {
	return this->aName;
}
void Seat_39::SetName(string name) {
	this->aName = name;
}
void Seat_39::SetId(int id) {
	this->aSeatId = id;
}
int Seat_39::GetId() {
	return this->aSeatId;
}

class Floor_39 {
	Seat_39 aSeat[32];
	int aSeatCount;
public:
	void InitFloor(int seat_count);
	void InitSeat(int seat_id);
	bool GetReserveSeat(int id);
	string GetReserveName(int id);
	void ReserveSeat(int seat_id, string name);
	void ShowSeat();
};
void Floor_39::InitFloor(int seat_count) {
	this->aSeatCount = seat_count;
	for (int i = 0; i < aSeatCount; i++) {
		aSeat[i].SetId(i + 1);
	}
}
void Floor_39::InitSeat(int seat_id) {
	aSeat[seat_id].InitSeat();
}
bool Floor_39::GetReserveSeat(int seat_id) {
	return aSeat[seat_id].GetReserveSeat();
}
string Floor_39::GetReserveName(int seat_id) {
	return aSeat[seat_id].GetName();
}
void Floor_39::ReserveSeat(int seat_id, string name) {
	aSeat[seat_id].SetName(name);
	aSeat[seat_id].SetReserveSeat(true);
}
void Floor_39::ShowSeat() {
	for (int i = 0; i < aSeatCount; i++) {
		if (!aSeat[i].GetName().compare("")) {
			cout << aSeat[i].GetId() << ".--------  \t\t";
		}
		else {
			cout << aSeat[i].GetId() << "." << aSeat[i].GetName() << "  \t\t";
		}
		if ((1 + i) % 3 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

class Library_39 {
	Floor_39 aFloor[3];
	int aFloorCount;
public:
	Library_39();
	void RunSystem();
	void ReserveSeat();
	void SearchSeat();
	void CancelSeat();
	void ShowSeat();
};

void Library_39::RunSystem() {
	int input;
	do {
		ShowSeat();
		cout << "1. ����\t\t2. ��ȸ\t\t3. ���\t\t4. ����" << endl;
		cout << "�޴��� �Է��ϼ���>>";
		cin >> input;
		switch (input) {
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
	} while (input != 4);
}
void Library_39::CancelSeat() {
	int floor_id, seat_id;
	string name;

	cout << "3. �� ��" << endl;
	cout << "����� �� ��ȣ�� �Է��ϼ���>> ";
	cin >> floor_id;
	cout << "����� �¼� ��ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	cin.ignore(1, '\n');
	if (aFloor[floor_id - 1].GetReserveSeat(seat_id - 1)) {
		cout << "�̸��� �Է��ϼ���>> ";
		getline(cin, name, '\n');
		if( !aFloor[floor_id-1].GetReserveName(seat_id-1).compare(name)){
			aFloor[floor_id - 1].InitSeat(seat_id - 1);
			cout << "������ ��ҵǾ����ϴ�." << endl;
		}
		else {
			cout << "�̸��� �ùٸ��� �ʽ��ϴ�." << endl;
		}
	}
	else {
		cout << "����Ǿ� ���� �ʱ� ������ ����� �� �����ϴ�." << endl;
	}
}
void Library_39::SearchSeat() {
	int seat_id, floor_id;

	cout << "2. �� ȸ" << endl;
	cout << "��ȸ�� �� ��ȣ�� �Է��ϼ���>> ";
	cin >> floor_id;
	cout << "��ȸ�� �¼� ��ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	fflush(stdin);
	if (aFloor[floor_id - 1].GetReserveSeat(seat_id - 1)) {
		cout << "�� �ڸ��� " << aFloor[floor_id-1].GetReserveName(seat_id - 1) << "���� �����ϼ̽��ϴ�." << endl;
	}
	else {
		cout << "�� �ڸ��� ������ϴ�." << endl;
	}
}
Library_39::Library_39() {
	cout << "\t\t������ �¼� ���� �ý���" << endl; 
	aFloorCount = 3;
	aFloor[0].InitFloor(10);
	aFloor[1].InitFloor(20);
	aFloor[2].InitFloor(30);	
}
void Library_39::ReserveSeat() {
	int floor_id, seat_id;
	string name;

	cout << "1. �� ��" << endl;
	cout << "�� ��ȣ�� �Է��ϼ���>> ";
	cin >> floor_id;
	cout << "�¼� ��ȣ�� �Է��ϼ���>> ";
	cin >> seat_id;
	cin.ignore(1, '\n');
	if (aFloor[floor_id -1].GetReserveSeat(seat_id - 1)) {
		cout << "�̹� ����� �¼��Դϴ�." << endl;
	}
	else {
		cout << "����Ͻ� �� �̸��� �Է��� �ּ���>> ";
		getline(cin, name);
		aFloor[floor_id - 1].ReserveSeat(seat_id - 1, name);
		cout << "������ �Ϸ�Ǿ����ϴ�," << endl;
	}
}
void Library_39::ShowSeat() {
	for (int i = 0; i < aFloorCount; i++) {
		cout << i + 1 << "�� " << endl;
		aFloor[i].ShowSeat();
	}
}

void Effector::Problem39() {
	Library_39 hansungLibrary;
	hansungLibrary.RunSystem();
}