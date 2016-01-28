#include"method_22_ProgramCounter.h"
ProgramCounter::ProgramCounter(){
	aAddress = ROM_SIZE;
}
int ProgramCounter::GetPC(){
	return this->aAddress;
}
void ProgramCounter::SetPC(int address){
	this->aAddress = address;
}