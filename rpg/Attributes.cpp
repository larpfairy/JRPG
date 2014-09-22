#include "Attributes.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void Attributes::GetAttributes(int *Str, int *Dex, int *Con, int *Int)
{
    srand(time(0));
    *Str = (rand()%6+1) + (rand()%6+1) + (rand()%6+1);
    *Dex = (rand()%6+1) + (rand()%6+1) + (rand()%6+1);
    *Con = (rand()%6+1) + (rand()%6+1) + (rand()%6+1);
    *Int = (rand()%6+1) + (rand()%6+1) + (rand()%6+1);

}
void Attributes::FixAttributes(int *Str, int *Dex, int *Con, int *Int)
{
    cout << "Please choose one score to increase by 2." << endl;
    string att;
    cin >> att;
    if(att == "Strength" || "str" || "strength")
    {
        *Str = *Str + 2;
    }
    if(att == "dex" || "Dex" || "dexterity" || "Dexterity")
    {
        *Dex = *Dex +2;
    }
    if(att == "con" || "Con" || "Constitution" || "constitution")
    {
        *Con = *Con +2;
    }
    if(att == "Int" || "int" || "intelligence" || "Intelligence")
    {
        *Int = *Int +2;
    }
    else
    {
       void FixAttributes(int *Str, int *Dex, int *Con, int *Int);
    }
}
