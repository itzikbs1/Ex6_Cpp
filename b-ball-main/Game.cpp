#include "iostream"
#include "Game.hpp"
#include <cmath>
using namespace std;
using namespace ball;
Game::Game(){
    this->home_team;
    this->out_team;
    this->win_team=home_team->get_name();
}
Game::Game(Team *home_team, Team *out_team){
    this->home_team = home_team;
    this->out_team = out_team;
}
void Game::play_game(){
    int bonus_points = rand()%11;
    int basic_solution = rand()%51 + 50;
    
    int home_solution = rand()%46 + 55;
    home_solution += bonus_points;
    
    if (this->home_team->get_unique() > 0.5)
    {
       home_solution += bonus_points;
    }
    if (this->out_team->get_unique() > 0.5)
    {
       basic_solution += bonus_points;
    }
}    
string Game::get_winner(){
    return this->win_team;
}
double Game::avg(int points1, int points2){
    return ((points1 + points2)/2);
}
double Game::devitaion(double avg, int points1,int points2){
    return sqrt(((pow((points1 - avg),2) + pow((points2 - avg),2))));
}
