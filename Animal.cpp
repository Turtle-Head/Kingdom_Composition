#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, std::string sound, std::string race, int age) :name(name), sound(sound), race(race), age(age) {}


void Animal::makeSound()
{
	std::cout << "\n " << this->name << " says " << this->sound << std::endl;
}

void Animal::getName()
{
	std::cout << "\n " << this->name << " \n";
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

void Animal::getRace()
{
	std::cout << "\n " << this->name << ": is a " << this->age << " year old " << this->race << std::endl;
}

