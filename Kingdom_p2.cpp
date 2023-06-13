// Kingdom_p2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PetOwner.h"
#include "Animal.h"

int main()
{
    Animal Roxx("Roxy", "Bark! Bark!\n", "Dog", 5);
    Animal Dobby("Peter Pan", "Meow", "Cat", 3);
    //tOwner Guy("Jack", Roxx, Dobby);
    PetOwner Sara("Sara", Dobby,Roxx);
    /*Guy.getPet();
    Guy.talktoPet();
    Guy.getPetRace();*/
    Sara.talktoPet();
    Sara.playFetchWithDog(Roxx);

}



