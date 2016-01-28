#ifndef COMPUTER_H
#define COMPUTER_H
#include"method_22_RAM.h"
#include"method_22_ROM.h"
#include"method_22_CPU.h"
#define INST_FILE "instruction_set.txt"
class Computer{
	ROM aROM;
	RAM aRAM;
	CPU aCPU;
public:
	void Booting();
	void ShowDump();
	void ShowRAM();
	void ShowROM();
	string RunProgram(string programName);
	Computer();
};


#endif