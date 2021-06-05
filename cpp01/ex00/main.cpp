#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony PonyOnStack("Pierro", "17", "90 km/h", "white");

    PonyOnStack.getPony();
}

void ponyOnTheHeap()
{
    Pony *PonyOnHeap = new Pony("Brume de la valée", "10", "82 km/h", "brown");

    PonyOnHeap->getPony();
    delete PonyOnHeap;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}