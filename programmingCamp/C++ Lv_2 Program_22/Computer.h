#ifndef COMPUTER_H
#define COMPUTER_H
#include"RAM.h"
#include"ROM.h"
#include"CPU.h"
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