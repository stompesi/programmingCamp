#include"CPU.h"
#include"ControlUnit.h"
#include<iostream>
using namespace std;
CPU::CPU(RAM* rRAM, ROM* rROM){
	this->arRAM = rRAM;
	this->arROM = rROM;
	this->apControlUnit = new ControlUnit(this);
	this->aEmilminate = false;
	for(int i = 0 ; i < REGISTER_SIZE ; i++){
		this->aRegister[i].SetValue(0);
	}
}
void CPU::ShowData(){
	cout<<"P : "<<aProgramCounter.GetPC();
	for(int i = 0 ; i < REGISTER_SIZE ; i++){
		cout<<" "<<(char)(65+i)<<" : "<<aRegister[i].GetValue();
	}
	cout<<" F : "<<aFlagRegister.GetFlag()<<endl;


}
void CPU::OperatingJob(){
	int insturction_length, op_code, pc;
	while(true){
		pc = aProgramCounter.GetPC();								//1. program counter 읽음
		op_code = arRAM->GetValue(pc - ROM_SIZE);					//2.해당 주소에 저장된 명령어 하나 읽어옴
		insturction_length = arROM->GetInstructionLenth(op_code);	//3. 명령어 형태를 보고 명령어 길이 가져옴.
		aProgramCounter.SetPC(pc + insturction_length);				//4. pc 값 증가.
		for(int i = pc - ROM_SIZE, j = 0; i < insturction_length + pc - ROM_SIZE; i++, j++){	//5. 명령어 IR에 저장.
			aInstructionRegister.SetInstruction(j, arRAM->GetValue(i));
		}
		apControlUnit->InterpretInstruction();						//6. 명령어 해석
		ShowData();
		if(aEmilminate){
			break;
		}
	}
}