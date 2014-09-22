#include <iostream>
#include <string>
#ifndef PLAYER1_H
#define PLAYER1_H

using namespace std;

class Player1
{
    public:
        string GetName();
        void SetName();
        string GetRace();
        void SetRace();
        string GetClass();
        void SetClass();
    private:
        int i;
        int raceNumber;
        int classNumber;
        string playerName;
        string playerRace;
        string playerClass;
        string Races[5] = {"Human", "Zoltan", "Qunari", "Salarian", "Asari"};
        string Classes[3] = {"Sniper", "Fighter", "Psychic"};
};

#endif // PLAYER1_H
