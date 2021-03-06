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
        string Classes[5] = {"Policeman", "Nurse", "Scientist", "Brawler", "Homeless"};
};

#endif // PLAYER1_H
