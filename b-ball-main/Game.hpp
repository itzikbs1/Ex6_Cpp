#pragma once
#include "iostream"
#include "Team.hpp"

using namespace std;

namespace ariel{
class Game{

private:
    Team *home_team;
    Team *out_team;
    string win_team;
public:
    Game();
    Game(Team *home_team, Team *out_team);
    void play_game();
    double avg(int points1, int points2);
    double devitaion(double avg, int points1,int points2);
    string get_winner();
};
}