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
		cout << "1. 예약\t\t2. 조회\t\t3. 취소\t\t4. 종료" << endl;
		cout << "메뉴를 입력하세요>>";
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
			cout << "시스템이 종료됩니다." << endl;
			break;
		default:
			cout << "입력이 바르지 않습니다" << endl;
			break;
		}
	} while (input != 4);
}
void Library_39::CancelSeat() {
	int floor_id, seat_id;
	string name;

	cout << "3. 취 소" << endl;
	cout << "취소할 층 번호를 입력하세요>> ";
	cin >> floor_id;
	cout << "취소할 좌석 번호를 입력하세요>> ";
	cin >> seat_id;
	cin.ignore(1, '\n');
	if (aFloor[floor_id - 1].GetReserveSeat(seat_id - 1)) {
		cout << "이름을 입력하세요>> ";
		getline(cin, name, '\n');
		if( !aFloor[floor_id-1].GetReserveName(seat_id-1).compare(name)){
			aFloor[floor_id - 1].InitSeat(seat_id - 1);
			cout << "예약이 취소되었습니다." << endl;
		}
		else {
			cout << "이름이 올바르지 않습니다." << endl;
		}
	}
	else {
		cout << "예약되어 있지 않기 때문에 취소할 수 없습니다." << endl;
	}
}
void Library_39::SearchSeat() {
	int seat_id, floor_id;

	cout << "2. 조 회" << endl;
	cout << "조회할 층 번호를 입력하세요>> ";
	cin >> floor_id;
	cout << "조회할 좌석 번호를 입력하세요>> ";
	cin >> seat_id;
	fflush(stdin);
	if (aFloor[floor_id - 1].GetReserveSeat(seat_id - 1)) {
		cout << "이 자리는 " << aFloor[floor_id-1].GetReserveName(seat_id - 1) << "님이 예약하셨습니다." << endl;
	}
	else {
		cout << "이 자리는 비었습니다." << endl;
	}
}
Library_39::Library_39() {
	cout << "\t\t도서관 좌석 예약 시스템" << endl; 
	aFloorCount = 3;
	aFloor[0].InitFloor(10);
	aFloor[1].InitFloor(20);
	aFloor[2].InitFloor(30);	
}
void Library_39::ReserveSeat() {
	int floor_id, seat_id;
	string name;

	cout << "1. 예 약" << endl;
	cout << "층 번호를 입력하세요>> ";
	cin >> floor_id;
	cout << "좌석 번호를 입력하세요>> ";
	cin >> seat_id;
	cin.ignore(1, '\n');
	if (aFloor[floor_id -1].GetReserveSeat(seat_id - 1)) {
		cout << "이미 예약된 좌석입니다." << endl;
	}
	else {
		cout << "사용하실 분 이름을 입력해 주세요>> ";
		getline(cin, name);
		aFloor[floor_id - 1].ReserveSeat(seat_id - 1, name);
		cout << "예약이 완료되었습니다," << endl;
	}
}
void Library_39::ShowSeat() {
	for (int i = 0; i < aFloorCount; i++) {
		cout << i + 1 << "층 " << endl;
		aFloor[i].ShowSeat();
	}
}

void Effector::Problem39() {
	Library_39 hansungLibrary;
	hansungLibrary.RunSystem();
}