#include"method_22_ControlUnit.h"
#include"method_22_CPU.h"
ControlUnit::ControlUnit(CPU *pCPU){
	this->apCPU = pCPU;
}
void ControlUnit::InterpretInstruction(){
	int register_index;
	int operand[3];
	switch((char)apCPU->aInstructionRegister.aBuffer[0]){
	case 'T':
		operand[0] = apCPU->aInstructionRegister.aBuffer[1] - 65;
		operand[1] = apCPU->aInstructionRegister.aBuffer[2];
		apCPU->aRegister[operand[0]].SetValue(operand[1]);
		break;
	case 'M':
		operand[0] = apCPU->aInstructionRegister.aBuffer[1] - 65;
		operand[1] = apCPU->aInstructionRegister.aBuffer[2] - 65;
		apCPU->aRegister[operand[0]].SetValue(apCPU->aRegister[operand[1]].GetValue());
		break;
	case 'W':
		operand[0] = apCPU->aInstructionRegister.aBuffer[1] - ROM_SIZE;
		operand[1] = apCPU->aInstructionRegister.aBuffer[2] - 65;
		apCPU->arRAM->aAddress[operand[0]] = apCPU->aRegister[operand[1]].GetValue();
		break;
	case 'R':
		operand[0] = apCPU->aInstructionRegister.aBuffer[1] - 65;
		operand[1] = apCPU->aInstructionRegister.aBuffer[2] - ROM_SIZE;
		apCPU->aRegister[operand[0]].SetValue(apCPU->arRAM->aAddress[operand[1]]);
		break;
	case 'A':
		
		break;
	case 'S':
		
		break;
	case 'I':
		
		break;
	case 'D':
		
		break;
	case 'C':
		operand[0] = apCPU->aInstructionRegister.aBuffer[1] - 65;
		operand[1] = apCPU->aInstructionRegister.aBuffer[2] - 65;
		if(apCPU->aRegister[operand[0]].GetValue() > apCPU->aRegister[operand[1]].GetValue()){
			apCPU->aFlagRegister.SetFlag(0);
		} else {
			apCPU->aFlagRegister.SetFlag(1);
		}
		break;
	case 'J':

		break;
	case 'F':
		if(apCPU->aFlagRegister.GetFlag() == 1){
			operand[0] = apCPU->aInstructionRegister.aBuffer[1];
			apCPU->aProgramCounter.aAddress = operand[0];
		}
		break;
	case 'E':
		apCPU->aEmilminate = true;
		break;
	}
}