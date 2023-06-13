// Author::James Fehr
#pragma once
#include <string>
#include <iostream>
class Animal
{
private:
    std::string name, race, sound;
public:
    int age;
    Animal(std::string name, std::string sound, std::string race, int age);
    void makeSound();
    std::string getName(Animal arg);
    void setName();
    void setSound();
    int getAge();
    void setAge();
    void setRace();
    bool isDog(Animal arg);

};

