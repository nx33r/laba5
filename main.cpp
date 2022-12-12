#include "Aquarium.h"

int main()
{
	Aquarium aquarium1(5);
	Aquarium aquarium2(7);

	Fish fish1("name1", 1, "fish", 13, "feed", false, 1);
	Fish fish2("name2", 1, "fish", 15, "feed", false, 2);
	Fish fish3("name3", 2, "fish", 9, "feed", false, 1);
	Fish fish4("name4", 3, "fish", 10, "feed", false, 1.5);
	Fish fish5("name5", 3, "fish", 20, "meet", true, 3);
	Fish fish6("name6", 1, "fish", 11, "feed", true, 1);
	Fish fish7("name7", 1, "fish", 18, "feed", true, 2.5);
	Fish fish8("name8", 1, "fish", 21, "feed", false, 3);

	aquarium1.addFish(fish1);
	aquarium1.addFish(fish5);
	aquarium1.addFish(fish2);
	aquarium1.addFish(fish3);

	aquarium2.addFish(fish5);
	aquarium2.addFish(fish6);
	aquarium2.addFish(fish7);

	cout << "Aquarium 1:" << endl;
	aquarium1.print();

	cout << "\nAquarium 2:" << endl;
	aquarium2.print();

	return 0;
}
