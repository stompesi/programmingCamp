/**
* @file method_38.cpp
* @author 한성대학교 컴퓨터공학과 강진혁(jinhuk1313@gmail.com)	
* @brief 2016 동계 코딩 캠프 C++ Level.1 문제 38
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
		cout << "1. 예약\t\t2. 조회\t\t3. 취소\t\t4. 종료" << endl;
		cout << "메뉴를 입력하세요>>";
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
			cout << "시스템이 종료됩니다." << endl;
			break;
		default:
			cout << "입력이 바르지 않습니다" << endl;
			break;
		}
	} while(input!= 4);
}
void Library::CancelSeat() {
	int seat_id;
	string name;
	
	cout << "3. 취 소" << endl;
	cout << "취소할 번호를 입력하세요>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()) {
		cout << "이름을 입력하세요>> ";
		getline(cin, name, '\n');
		if(!aSeat[seat_id-1].GetName().compare(name)) {
			aSeat[seat_id-1].InitSeat();
			cout << "예약이 취소되었습니다." << endl;
		} else {
			cout << "이름이 올바르지 않습니다." << endl;
		}
	} else {
		cout << "예약되어 있지 않기 때문에 취소할 수 없습니다." << endl;
	}
}
void Library::SearchSeat() {
	int seat_id;
	
	cout << "2. 조 회" << endl;
	cout << "조회할 좌석번호를 입력하세요>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()){
		cout << "이 자리는 " << aSeat[seat_id-1].GetName() << "님이 예약하셨습니다." << endl;
	}else{
		cout << "이 자리는 비었습니다." << endl;
	}
}
Library::Library() {
	cout << "\t\t도서관 좌석 예약 시스템" << endl;
	aSeatCount = sizeof(aSeat) / sizeof(Seat);
	for(int i = 0; i < aSeatCount ; i++) {
		aSeat[i].SetId(i+1);
	}
}
void Library::ReserveSeat() {
	int seat_id;
	string name;
	
	cout << "1. 예 약" << endl;
	cout << "좌석 번호를 입력하세요>> ";
	cin >> seat_id;
	fflush(stdin);
	if(aSeat[seat_id-1].GetReserveSeat()) {
		cout << "이미 예약된 좌석입니다." << endl;
	} else {
		cout << "사용하실 분 이름을 입력해 주세요>> ";
		getline(cin,name,'\n');
		aSeat[seat_id-1].SetName(name);
		aSeat[seat_id-1].SetReserveSeat(true);
		cout << "예약이 완료되었습니다," << endl;
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