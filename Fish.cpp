#include "Fish.h"

Fish::Fish(string name, int age, string species, double size, string prefferedFood, bool isAggressive, double neededSpace)
{
	this->name = name;
	this->age = age;
	this->species = species;
	this->size = size;
	this->prefferedFood = prefferedFood;
	this->isAggressive = isAggressive;
	this->neededSpace = neededSpace;
}

void Fish::print()
{
	cout << "name - " << name << endl;
	cout << "age - " << age << endl;
	cout << "species - " << species << endl;
	cout << "size - " << size << endl;
	cout << "preffered food - " << prefferedFood << endl;
	cout << "needed space - " << neededSpace << endl;
	cout << "is aggresive - " << isAggressive << endl;
}

string Fish::getName()
{
	return name;
}

string Fish::getSpecies()
{
	return species;
}

string Fish::getPrefferedFood()
{
	return prefferedFood;
}

int Fish::getAge()
{
	return age;
}

double Fish::getSize()
{
	return size;
}

double Fish::getNeededSpace()
{
	return neededSpace;
}

bool Fish::getIsAggressive()
{
	return isAggressive;
}
