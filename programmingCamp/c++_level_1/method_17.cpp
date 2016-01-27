#include "method.h"

#define NUM_OF_CACHE 5

class CacheBlock {
	int aID;
public:
	void SetCache(int i) { aID = i; }
	int GetID() { return aID; }
};

class CacheMemory {
	int *apBlocks;
	int aSize;
	int aFirst, aLast;
public:
	CacheMemory(int n);
	void LoadBlock(CacheBlock c);
	void AccessCache(int idx);

	int LFU();
	int LIFO();
	int FIFO();
};

int rand1to5();

CacheMemory::CacheMemory(int n) {
	apBlocks = new int[n];
	for (int i = 0; i < n; i++) {
		apBlocks[i] = 0;
	}
	aSize = 0;
}

void CacheMemory::LoadBlock(CacheBlock c) {
	if (aSize < NUM_OF_CACHE) {
		if (aSize == 0) {
			aFirst = c.GetID();
		}
		else if (aSize == NUM_OF_CACHE - 1) {
			aLast = c.GetID();
		}
		aSize++;
	}
	else {
		cout << "캐쉬 용량 초과" << endl;
	}
}

void CacheMemory::AccessCache(int idx) {
	apBlocks[idx]++;
}

int CacheMemory::LFU() {
	int min = 0;

	for (int i = 1; i < NUM_OF_CACHE; i++) {
		if (apBlocks[min] > apBlocks[i]) {
			min = i;
		}
	}

	return min;
}

int CacheMemory::LIFO() {
	return aLast;
}

int CacheMemory::FIFO() {
	return aFirst;
}

int rand1to5() {
	int r = rand() % NUM_OF_CACHE;
	return r;
}

void Effector::Problem17() {
	CacheBlock *apCache_block = new CacheBlock[5];
	CacheMemory myCache(NUM_OF_CACHE);
	srand(time(NULL)); 
					  
	for (int i = 0 ; i < NUM_OF_CACHE ; i++) {
		apCache_block[i].SetCache(i);
	}

	for (int i = 0 ; i < NUM_OF_CACHE ; i++) {
		myCache.LoadBlock(apCache_block[i]);
	}

	for (int i = 0 ; i < 10 ; i++) {
		int r = rand1to5();
		cout << "access ID: " << r << endl;
		myCache.AccessCache(r);
	}
	cout << endl;

	cout << "LFU result " << myCache.LFU() << endl;
	cout << "LIFO result " << myCache.LIFO() << endl;
	cout << "FIFO result " << myCache.FIFO() << endl;
}
