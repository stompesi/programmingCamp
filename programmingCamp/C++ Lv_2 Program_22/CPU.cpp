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
		pc = aProgramCounter.GetPC();								//1. program counter ����
		op_code = arRAM->GetValue(pc - ROM_SIZE);					//2.�ش� �ּҿ� ����� ��ɾ� �ϳ� �о��
		insturction_length = arROM->GetInstructionLenth(op_code);	//3. ��ɾ� ���¸� ���� ��ɾ� ���� ������.
		aProgramCounter.SetPC(pc + insturction_length);				//4. pc �� ����.
		for(int i = pc - ROM_SIZE, j = 0; i < insturction_length + pc - ROM_SIZE; i++, j++){	//5. ��ɾ� IR�� ����.
			aInstructionRegister.SetInstruction(j, arRAM->GetValue(i));
		}
		apControlUnit->InterpretInstruction();						//6. ��ɾ� �ؼ�
		ShowData();
		if(aEmilminate){
			break;
		}
	}
}