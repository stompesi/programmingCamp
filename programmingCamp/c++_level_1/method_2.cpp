#include "method.h"

class Student {
	string name;
	double midScore;
	double finalScore;
	double averageScore;	
public :
	void SetName(string name);
	void SetMidScore(int score);
	void SetFinalScore(int score);
	void CalcAverage();
	string GetName();
	double GetMidScore();
	double GetFinalScore();
	double GetAverageScore();
};

void Student::SetName(string name) {
	this->name = name;
}
void Student::SetMidScore(int score) {
	this->midScore = score;
}
void Student::SetFinalScore(int score) {
	this->finalScore = score;
}
void Student::CalcAverage() {
	averageScore = (midScore + finalScore) / 2;
}
string Student::GetName() {
	return this->name;
}
double Student::GetMidScore() {
	return this->midScore;
}
double Student::GetFinalScore() {
	return this->finalScore;
}
double Student::GetAverageScore() {
	return this->averageScore;
}

// 문제 - 실행함수
void Effector::Problem2() {
	int student_num = 0, i;
	string name;
	int mid, final;
	Student *students;

	char buffer[256];
	char* in_file = "student.txt";
	ifstream fin(in_file);
	char* out_file = "student-sumgjuk.txt";
	ofstream fout(out_file);

	// 문제 2-1
	/*

	cout << "전체 학생 수를 입력하시오: " ;
	cin >> student_num;

	students = new Student[student_num];

	for(i = 0; i < student_num; i++) {
		cout << "이름 : ";
		cin >> name;
		students[i].SetName(name);
		cout << "중간고사 점수 : ";
		cin >> mid;
		students[i].SetMidScore(mid);
		cout << "기말고사 점수 : ";
		cin >> final;
		students[i].SetFinalScore(final);
		students[i].CalcAverage();
	}
	*/

	// 문제 2-2
	fin >> student_num;

	students = new Student[student_num];

	for(i = 0; i < student_num; i++) {
		fin >> name;
		students[i].SetName(name);
		fin >> mid;
		students[i].SetMidScore(mid);
		fin >> final;
		students[i].SetFinalScore(final);
		students[i].CalcAverage();
	}

	cout << "<전체 성적표>" << endl;
	fout << "<전체 성적표>" << endl;
	cout << "이름\t중간고사\t기말고사\t평균" << endl;
	fout << "이름\t중간고사\t기말고사\t평균" << endl;
	for (i = student_num-1; i >= 0; i--) {
		cout << students[i].GetName() << "\t" << students[i].GetMidScore() << "\t\t" << students[i].GetFinalScore() << "\t\t" << students[i].GetAverageScore() << endl;
		fout << students[i].GetName() << "\t" << students[i].GetMidScore() << "\t\t" << students[i].GetFinalScore() << "\t\t" << students[i].GetAverageScore() << endl;
	}

	fin.close();
	fout.close();
	delete [] students;
}
