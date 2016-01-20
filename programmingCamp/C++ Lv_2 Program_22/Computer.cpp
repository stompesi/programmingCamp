#include<string>
#include<iostream>
#include"Computer.h"
#include"ControlUnit.h"
using namespace std;
Computer::Computer() : aCPU(&aRAM, &aROM){
}
string Computer::RunProgram(string programName){
	if(programName == ""){
		return "";
	} else if(!aRAM.LoadProgram(programName)){
		return "File Open Error\n";
	}
	ShowRAM();
	aCPU.OperatingJob();
	cout<<"프로그램 실행을 종료합니다."<<endl;
	cout<<"ROM을 출력합니다"<<endl;
	ShowROM();
	cout<<"RAM을 출력합니다."<<endl;
	ShowRAM();
	return "";
}
void Computer::ShowRAM(){
	for(int i = 0 ; i < RAM_SIZE ; i++){
		if(i % 10 == 0){
			cout<<endl<<i+100<<" : ";
		}
		cout<<aRAM.aAddress[i]<<" ";
	}
	cout<<endl;
}
void Computer::ShowROM(){
	for(int i = 0 ; i < ROM_SIZE ; i++){
		if(i % 10 == 0){
			cout<<endl<<i+100<<" : ";
		}
		cout<<aROM.aAddress[i]<<" ";
	}
	cout<<endl;
}
void Computer::Booting(){
	aROM.SetInstructionSet(INST_FILE);
}