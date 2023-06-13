#pragma once
#include <string>
#include "Animal.h"
#include <iostream>
class PetOwner
{
private:
	std::string name;
	Animal pet,pet2;
public:
	int totalFetches = 0;
	PetOwner(std::string name, Animal pet, Animal pet2);
	void setName();
	void getName();
	void setPet(Animal arr);
	//void getPet();
	void talktoPet();
	void getPetAge();
	void playFetchWithDog(Animal arg);
	void hearAnimalSound(Animal arg);
};


