#include<iostream>
#include<string>
using namespace std;
class Block{
public :
	string name;
	int width;
	int length;
	int height;
	Block(string name,int width,int length,int height);
	virtual int getVolume();
};
Block::Block(string name,int width, int length, int height){
	this->name = name;
	this->width = width;
	this->length = length;
	this->height = height;
}
int Block::getVolume(){
	return width * length * height;
}

class BlockPrism : public Block{
public :
	BlockPrism(string name, int width, int length, int height);
	int getVolume();
};
BlockPrism::BlockPrism(string name, int width, int length, int height) : Block(name,width,length,height){
}
int BlockPrism::getVolume(){
	return  (width * length * height)*((double)1/3);
}
class BlockHuman : public Block{
public :
	BlockHuman(string name, int width, int length, int height);
	int getVolume();
};
BlockHuman::BlockHuman(string name, int width, int length, int height) : Block(name,width,length,height){
}
int BlockHuman::getVolume(){
	return (width * length * height)*((double)1/2);
}
void problem_18(){
    Block *b[3];
	b[0] = new Block("BLOCK", 1, 1, 1);
	b[1] = new BlockPrism("Prism", 2, 3, 4);
	b[2] = new BlockHuman("Human", 10, 10, 10);

	for (int i = 0; i < 3; i++)
		cout << b[i]->name << " = " << b[i]->getVolume()<<endl;
}
