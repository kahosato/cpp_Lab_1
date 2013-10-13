#include "creatures.h"

int main()
{
    Creature* pCreature;
    pCreature = new Monkey;
    pCreature->makeNoise();
    delete pCreature;
    pCreature = new Pig;
    pCreature->makeNoise();
    delete pCreature;
    pCreature = new Duck;
    pCreature->makeNoise();
    delete pCreature;
    
}

