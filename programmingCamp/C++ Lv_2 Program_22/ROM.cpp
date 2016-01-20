#include"ROM.h"
bool ROM::SetInstructionSet(string filePath){
	fstream instruction_file;
	instruction_file.open(filePath, ios::in);
	if(!instruction_file.is_open()){
		return false;
	}
	for(int i = 0 ; i < ROM_SIZE ; i++){
		instruction_file>>aAddress[i];
		if(instruction_file.eof()){
			break;
		}
	}
	instruction_file.close();
	return true;
}
void ROM::SetValue(int address, int value){
	this->aAddress[address] = value;
}
int ROM::GetValue(int address){
	return aAddress[address];
}
int ROM::GetInstructionLenth(int opCode){
	for(int i = 0 ; i < ROM_SIZE ; i += 2){
		if(aAddress[i] == opCode){
			return aAddress[i+1];
		}
	}
	return 0;
}
ROM::ROM(){
	memset(aAddress, 0, ROM_SIZE*sizeof(aAddress[0]));
}
ROM::~ROM(){
}
