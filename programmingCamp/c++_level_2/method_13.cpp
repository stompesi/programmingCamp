#include"method.h"
#include<string>
#include<iostream>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#define SCORE_FILE "score.txt"
using namespace std;
class Score{
	fstream aFileIn;
public:
	bool FileOpen(string filePath);
	void recordScore(string name, int score);
	~Score();
};
void Score::recordScore(string name, int score){
	aFileIn<<name<<" : "<<score<<"점"<<endl;
}
bool Score::FileOpen(string filePath){
	aFileIn.open(filePath);
	return aFileIn;
}
Score::~Score(){
	aFileIn.close();
}
class Player{
	string aName;
	int aScore;
public:
	Player();
	string Answer();
	void SetName(string name){
		this->aName = name;
	}
	string GetName(){
		return aName;
	}
	int GetScore(){
		return aScore;
	}
};
string Player::Answer(){
	string input_answer;
	aScore++;
	getline(cin,input_answer, '\n');
	return input_answer;
}
Player::Player(){
	aName = "";
	aScore = 0;
}
class Computer{
	int* aNumber;
	int aNumberLength;
	bool aGameComplete;
public:
	string aDstNumber;
	void SetLength(int length);
	void GenNumber();
	bool IsDupli(int randNumber);
	bool IsGameComplete();
	string Disicion(string answer);
	int GetNumberLength(){
		return this->aNumberLength;
	}
};
string Computer::Disicion(string answer){
	string disicion = "";
	int strike_count = 0, ball_count = 0;
	//strike 
	for(int i = 0 ; i < aNumberLength ; i++){
		for(int j = 0 ; j < aNumberLength ; j++){
			if(i == j){
				if(answer[i] == aDstNumber[j]){
					strike_count++;
					break;
				}
			} else{
				if(answer[i] == aDstNumber[j]){
					ball_count++;
				}
			}
		}
	} 
	if(strike_count == 0 && ball_count == 0){
		disicion = "아웃";
	} else if(strike_count == 4){
		disicion = "홈런";
		aGameComplete = true;
	} else{
		if(strike_count>0){
			disicion = disicion.append(to_string(strike_count)).append("S ");
		}
		if(ball_count > 0){
			disicion = disicion.append(to_string(ball_count)).append("B ");
		}
	}
	return disicion;
}
bool Computer::IsGameComplete(){
	return this->aGameComplete;
}
bool Computer::IsDupli(int randNumber){
	for(int i = 0 ; i < aNumberLength ; i++){
		if(aNumber[i] == randNumber){
			return true;
		}
	}
	return false;
}
void Computer::SetLength(int length){
	aNumber = new int[length];
	aNumberLength = length;
	aDstNumber = "";
	aGameComplete = false;
}
void Computer::GenNumber(){
	int temp_int;
	srand(time(NULL));
	for(int i = 0 ; i < aNumberLength ;){
		temp_int = rand() % 10;
		if(!IsDupli(temp_int)){
			aNumber[i] = temp_int;
			i++;
		}
	}
	for(int i = 0 ; i < aNumberLength ; i++){
		aDstNumber = aDstNumber.append(to_string(aNumber[i]));
	}
}
class BaseballGame{
	Score aScoreRecoder;
	Player aPlayer;
	Computer aComputer;
public:
	void RunGame();

};
void BaseballGame::RunGame(){
	string temp_string;
	int temp_int;
	if(!aScoreRecoder.FileOpen(SCORE_FILE)){
		cout<<"파일 오픈 실패"<<endl;
	}
	cout<<"사용자 이름을 입력 >> ";
	getline(cin, temp_string, '\n');
	aPlayer.SetName(temp_string);

	cout<<"몇 자리수?"<<endl<<"1. 3자리\t2. 4자리"<<endl<<">>";
	getline(cin, temp_string, '\n');
	temp_int = stoi(temp_string);
	switch(temp_int){
	case 1:
		aComputer.SetLength(3);
		break;
	case 2:
		aComputer.SetLength(4);
		break;
	}
	cout<<"컴퓨터가 숫자를 정하는 중..."<<endl;
	aComputer.GenNumber();
	cout<<"게임 시작"<<endl;
	cout<<aComputer.aDstNumber<<endl;

	while(!aComputer.IsGameComplete()){
		cout<<"0-9사이의 "<<aComputer.GetNumberLength()<<"자리 숫자를 얘기해보세요"<<endl;
		cout<<aComputer.Disicion(aPlayer.Answer())<<endl;
	}
	cout<<aPlayer.GetScore()<<"번만에 맞췄다."<<endl;
	aScoreRecoder.recordScore(aPlayer.GetName(), aPlayer.GetScore());
}
void Effector::Problem13(){
	BaseballGame game;
	game.RunGame();
}