#pragma once
#include <iostream>
#include <string>

using namespace std;

class Fish
{
	string name;
	string species;
	string prefferedFood;
	int age;
	double size;
	double neededSpace;
	bool isAggressive;

public:
	Fish(string name, int age, string species, double size, string prefferedFood, bool isAggressive, double neededSpace);

	void print();

	string getName();
	string getSpecies();
	string getPrefferedFood();
	int getAge();
	double getSize();
	double getNeededSpace();
	bool getIsAggressive();
};

