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
    void getName();
    void setName();
    void setSound();
    int getAge();
    void setAge();
    void setRace();
    void getRace();
};

