// Author::James Fehr
#include "PetOwner.h"
#include <iostream>
#include <string>

PetOwner::PetOwner(std::string name, Animal pet, Animal pet2):name(name), pet(pet), pet2(pet2) {}

void PetOwner::setName()
{
	this->name = name;
}

void PetOwner::getName()
{
	std::cout << name;
}

void PetOwner::setPet(Animal arr)
{
	this->pet = arr;
}

void PetOwner::getPetAge()
{
	std::cout << this->pet.getAge() << "years old\n";
	std::cout << this->pet2.getAge() << "years old\n";
}

void PetOwner::playFetchWithDog(Animal arg)
{
	if (arg.isDog(arg) == true) {
		
		for (int i = 0; i <= 3500; i++) {
			totalFetches++;
			std::cout << totalFetches << arg.getName(arg) << " fetches for "<< totalFetches << arg.getName(arg) << std::endl;

			if (totalFetches == 20) {
				std::cout << "\nWoah, that's a lot of activity! It's time for a break.\n";
				totalFetches = 0;
				break;
			}
		}
	}
}


void PetOwner::hearAnimalSound()
{
	this->pet.makeSound();
	this->pet2.makeSound();
}
