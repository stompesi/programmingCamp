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

// ���� - �����Լ�
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

	// ���� 2-1
	/*

	cout << "��ü �л� ���� �Է��Ͻÿ�: " ;
	cin >> student_num;

	students = new Student[student_num];

	for(i = 0; i < student_num; i++) {
		cout << "�̸� : ";
		cin >> name;
		students[i].SetName(name);
		cout << "�߰���� ���� : ";
		cin >> mid;
		students[i].SetMidScore(mid);
		cout << "�⸻��� ���� : ";
		cin >> final;
		students[i].SetFinalScore(final);
		students[i].CalcAverage();
	}
	*/

	// ���� 2-2
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

	cout << "<��ü ����ǥ>" << endl;
	fout << "<��ü ����ǥ>" << endl;
	cout << "�̸�\t�߰����\t�⸻���\t���" << endl;
	fout << "�̸�\t�߰����\t�⸻���\t���" << endl;
	for (i = student_num-1; i >= 0; i--) {
		cout << students[i].GetName() << "\t" << students[i].GetMidScore() << "\t\t" << students[i].GetFinalScore() << "\t\t" << students[i].GetAverageScore() << endl;
		fout << students[i].GetName() << "\t" << students[i].GetMidScore() << "\t\t" << students[i].GetFinalScore() << "\t\t" << students[i].GetAverageScore() << endl;
	}

	fin.close();
	fout.close();
	delete [] students;
}
