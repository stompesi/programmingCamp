#include"method_22_RAM.h"
bool RAM::LoadProgram(string FilePath){
	fstream program;
	program.open(FilePath);
	if(!program.is_open()){
		return false;
	}
	for(int i = 0 ; i < RAM_SIZE ; i++){
		program >> aAddress[i];
		if(program.eof()){
			return true;
		}
	}
}
void RAM::SetValue(int address, int value){
	this->aAddress[address] = value;
}
int RAM::GetValue(int address){
	return aAddress[address];
}
RAM::RAM(){
	memset(aAddress, 0, RAM_SIZE * sizeof(aAddress[0]));
}
RAM::~RAM(){
}