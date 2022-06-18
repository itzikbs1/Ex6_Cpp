#pragma once
#include "iostream"
#include "Team.hpp"

using namespace std;

namespace ariel{
class Game{

private:
    Team *home;
    Team *out;
    string win;
public:
    Game();
    Game(Team *home, Team *out);
    void play_game();
    double avg(int points1, int points2);
    double devitaion(double avg, int points1,int points2);
    string get_winner();
};
}