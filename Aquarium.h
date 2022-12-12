#pragma once
#include <vector>
#include "Fish.h"

class Aquarium
{
	vector<Fish> fishes;
	int countOfFish;
	double totalSpace;
	double freeSpace;

public:
	Aquarium(int space);

	void addFish(Fish fish);
	void printBiggest();
	void print();
};

