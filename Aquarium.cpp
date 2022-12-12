#include "Aquarium.h"

Aquarium::Aquarium(int space)
{
	this->totalSpace = space;
	this->freeSpace = space;
	this->countOfFish = 0;
}

void Aquarium::addFish(Fish fish)
{
	if (fish.getNeededSpace() >= freeSpace)
		return;

	if (fishes.size() == 0)
	{
		fishes.push_back(fish);
		countOfFish = 1;
		freeSpace -= fish.getNeededSpace();
		return;
	}

	if (fishes[0].getIsAggressive() == fish.getIsAggressive())
	{
		fishes.push_back(fish);
		countOfFish++;
		freeSpace -= fish.getNeededSpace();
	}
	else
	{
		cout << "Aggressive fish can't be with not aggressive one." << endl;
		return;
	}
}

void Aquarium::printBiggest()
{
	vector<Fish> buff = fishes;

	if (fishes.size() == 0)
		return;

	if (fishes.size() == 1)
	{
		cout << "\n1 fish:" << endl;
		buff[0].print();
		return;
	}

	for (int i = 0; i < buff.size(); i++)
	{
		for (int j = i + 1; j < buff.size(); j++)
		{
			if (buff[j].getSize() > buff[i].getSize())
			{
				Fish temp = buff[i];
				buff[i] = buff[j];
				buff[j] = temp;
			}
		}
	}

	if (fishes.size() == 2)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "\n" << i + 1 << " fish:" << endl;
			buff[i].print();
		}
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n" << i + 1 << " fish:" << endl;
		buff[i].print();
	}

}

void Aquarium::print()
{
	cout << "Total space: " << totalSpace << ", free space: " << freeSpace << endl;
	for (int i = 0; i < fishes.size(); i++)
	{
		cout << "\n" << i + 1 << " fish:" << endl;
		fishes[i].print();
	}
}
