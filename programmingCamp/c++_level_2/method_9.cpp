#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
#include"method.h"
using namespace std;

class Statistics{
	vector<int> aStorage;
public:
	bool operator !();
	void operator~();
	void operator>>(double& ave);
	Statistics& operator<<(int value);
};
bool Statistics::operator!(){
	if(aStorage.size() == 0){
		return true;
	}else{
		return false;
	}
}
void Statistics::operator~(){
	for(int i = 0 ; i < aStorage.size() ; i++){
		cout<< aStorage[i] << " ";
	}
	cout<<endl;
}
void Statistics::operator>>(double& ave){
	int total = 0;
	for(int i = 0; i < aStorage.size() ; i++){
		total += aStorage[i];
	}
	ave = (double)total/aStorage.size();
}
Statistics& Statistics::operator<<(int value){
	aStorage.push_back(value);
	return *this;
}



class DataType{
public:
	static bool IsDisit(string input);
};
bool DataType::IsDisit(string input){
	for(int i = 0 ; i < input.size() ; i++){
		if(isdigit(input[i]) == 0){
			return false;
		}
	}
	return true;
}

void Effector::Problem9(){
	Statistics stat;
	string input_data_count;
	int data_count;
	int data;
	double average;
	if(!stat){ 
		cout << "현재 통계 데이터가 없습니다." << endl;
	}
	
	do{
		cout<<"입력할 데이터 수를 입력하세요>> ";
		getline(cin, input_data_count, '\n');
		if(DataType::IsDisit(input_data_count)){
			data_count = stoi(input_data_count);
			break;
		}else{
			cout<< "입력 오류! 양의 정수를 입력하세요."<<endl;
		}
	}while(true);
	
	for (int i = 0; i < data_count; i++){
		cout<<"["<<i<<"]>> ";
		cin >> data;
		stat << data;  
	}
	stat << 100 << 200;   
	~stat;    
	stat >> average;
	cout<<"평균(float  형식)은 >>"<<(float)average<<endl;
	cout.precision(4);
	cout<<"평균(유효 숫자 4자리로)은 >>" <<average<<endl;
}