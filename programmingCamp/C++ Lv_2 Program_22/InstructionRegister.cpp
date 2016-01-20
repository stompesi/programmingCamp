#include"InstructionRegister.h"
void InstructionRegister::SetInstruction(int index, int value){
	this->aBuffer[index] = value;
}
void InstructionRegister::CleanBuffer(){
	for(int i = 0 ; i < IR_BUF_SIZE ; i++){
		aBuffer[i] = 0;
	}
}
int* InstructionRegister::GetBufferValue(){
	return aBuffer;
}
InstructionRegister::InstructionRegister(){
	CleanBuffer();
}