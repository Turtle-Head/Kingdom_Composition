#pragma once
#include <string>
#include "Animal.h"
#include <iostream>
class PetOwner
{
private:
	std::string name;
	Animal pet;
public:
	PetOwner(std::string name, Animal pet);
	void setName();
	void getName();
	void setPet(Animal pet);
	void getPet();
	void talktoPet();
	void getPetRace();
	void getPetAge();

};


