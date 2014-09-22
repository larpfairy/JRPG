#include "Player1.h"
#include <iostream>
#include <string>

using namespace std;


string Player1::GetName()
{
    return playerName;
}
void Player1::SetName()
{
    cout << "Please enter your name: ";
    cin >> playerName;
}
string Player1::GetRace()
{
    return playerRace;
}
void Player1::SetRace()
{
    cout << "Please Choose a Race: " << endl;
    for(i = 0; i < 5; i++)
    {
        cout << i+1 << ". ";
        cout << Races[i] << endl;
    }
    cin >> raceNumber;
    playerRace = Races[raceNumber-1];
}
string Player1::GetClass()
{
    return playerClass;
}
void Player1::SetClass()
{
    cout << "Please Choose a Class: " << endl;
    for(i = 0; i < 3; i++)
    {
        cout << i+1 << ". ";
        cout << Classes[i] << endl;
    }
    cin >> classNumber;
    playerClass = Classes[classNumber -1];
}
