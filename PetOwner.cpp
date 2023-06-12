#include "PetOwner.h"
#include <iostream>
#include <string>

PetOwner::PetOwner(std::string name, Animal pet):name(name),pet(pet) {}

void PetOwner::setName()
{
	this->name = name;
}

void PetOwner::getName()
{
	std::cout << name << std::endl;
}

void PetOwner::setPet(Animal pet)
{
	this->pet = pet;
}

void PetOwner::getPet()
{
	this->pet.getName();

}

void PetOwner::talktoPet()
{
	this->pet.makeSound();
}

void PetOwner::getPetRace()
{
	this->pet.getRace();
}

void PetOwner::getPetAge()
{
	std::cout << this->pet.getAge() << "years old\n";
}


