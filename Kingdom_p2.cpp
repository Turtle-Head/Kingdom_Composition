// Kingdom_p2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PetOwner.h"
#include "Animal.h"

int main()
{
    Animal Roxx("Roxy", "Bark! Bark!\n", "Doberman", 5);
    Animal Dobby("Peter Pan", "Meow", "Manx", 3);
    PetOwner Guy("Jack Spratt", Roxx);
    PetOwner Sara("Sara", Dobby);
    Guy.getPet();
    Guy.talktoPet();
    Guy.getPetRace();
    Sara.getPetRace();
    Sara.talktoPet();
}



