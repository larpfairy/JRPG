#include <iostream>
#include "Player1.h"
#include "Attributes.h"

using namespace std;
string name;
string playerClass;
int Str = 0, Dex = 0, Con = 0, Int = 0;

int main()
{
    Player1 player1object;
    player1object.SetName();
    name = player1object.GetName();
    player1object.SetClass();
    playerClass = player1object.GetClass();
    Attributes attributesobject;
    attributesobject.GetAttributes(&Str, &Dex, &Con, &Int);
    cout << "Strength: " << Str << " Dexterity: " << Dex << " Constitution " << Con << " Intelligence: " << Int << "." << endl;
    attributesobject.FixAttributes(&Str, &Dex, &Con, &Int);
    cout << "You are a " << playerClass <<  " named " << name << "." << endl;
    cout << "Strength: " << Str << " Dexterity: " << Dex << " Constitution " << Con << " Intelligence: " << Int << "." << endl;
    cin.get();
    cin.get();
    return 0;
}
