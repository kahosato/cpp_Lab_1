#include <iostream>
#include "creatures.h"
using namespace std;
/* YOU CANNOT redefine the class!(the he
 * header class defines the format already 
 * All you need to define now is the function.*/
Creature::Creature()
{
}

Creature::Creature(const Creature&)
{
}

void Monkey::makeNoise()
{
    cout << "ook!";
}

void Pig::makeNoise()
{
    cout << "oink!";
}

void Duck::makeNoise()
{
    cout << "quack!";
}

