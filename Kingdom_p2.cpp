// Kingdom_p2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author::James Fehr
// Part 2 of exercise

#include <iostream>
#include "PetOwner.h"
#include "Animal.h"

int main()
{
    Animal Roxx("Roxy", "Bark! Bark!\n", "Dog", 5);
    Animal Dobby("Peter Pan", "Meow", "Cat", 3);
    PetOwner Sara("Sara", Dobby,Roxx);

    Sara.hearAnimalSound();
    Sara.playFetchWithDog(Dobby);
    Sara.playFetchWithDog(Roxx);
    Sara.hearAnimalSound();
}



