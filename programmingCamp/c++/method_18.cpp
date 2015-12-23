#include<iostream>
#include<string>
using namespace std;
class Block{
public :
	string aName;
	int aWidth;
	int aLength;
	int aHeight;
	Block(string name,int width,int length,int height);
	virtual int GetVolume();
};
Block::Block(string name,int width, int length, int height){
	this->aName = name;
	this->aWidth = width;
	this->aLength = length;
	this->aHeight = height;
}
int Block::GetVolume(){
	return aWidth * aLength * aHeight;
}

class BlockPrism : public Block{
public :
	BlockPrism(string name, int width, int length, int height);
	int GetVolume();
};
BlockPrism::BlockPrism(string name, int width, int length, int height) : Block(name,width,length,height){
}
int BlockPrism::GetVolume(){
	return  (aWidth * aLength * aHeight)*((double)1/3);
}
class BlockHuman : public Block{
public :
	BlockHuman(string name, int width, int length, int height);
	int GetVolume();
};
BlockHuman::BlockHuman(string name, int width, int length, int height) : Block(name,width,length,height){
}
int BlockHuman::GetVolume(){
	return (aWidth * aLength * aHeight)*((double)1/2);
}
void problem_18(){
    Block *b[3];
	b[0] = new Block("BLOCK", 1, 1, 1);
	b[1] = new BlockPrism("Prism", 2, 3, 4);
	b[2] = new BlockHuman("Human", 10, 10, 10);

	for (int i = 0; i < 3; i++)
		cout << b[i]->aName << " = " << b[i]->GetVolume()<<endl;
}
