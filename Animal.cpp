#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, std::string sound, std::string race, int age) :name(name), sound(sound), race(race), age(age) {}


void Animal::makeSound()
{
	std::cout << "\n " << this->name << " says " << this->sound << std::endl;
}

std::string Animal::getName(Animal arg)
{
	return arg.name;
}

void Animal::setName()
{
	this->name = name;
}

void Animal::setSound()
{
	this->sound = sound;
}

int Animal::getAge()
{
	return age;
}

void Animal::setAge()
{
	this->age = age;
}

void Animal::setRace()
{
	this->race = race;
}

bool Animal::isDog(Animal arg)
{
	if (this->race == "Dog") {
		return true;
	}
	else return false;
}

void Animal::playFetchWithDog()
{
	if (this->race == "Bulldog") {
		for (int i = 0; i <= 10; i++) {
			std::cout << "\n " << this->name << " runs for the ball. \n " << this->name << " catches the ball. \n";
			std::cout << this->name << " caught the ball " << i << " times\n";
		}
		
	}
}

											 