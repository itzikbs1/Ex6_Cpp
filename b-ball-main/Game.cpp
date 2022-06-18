#include "iostream"
#include "Game.hpp"
#include <cmath>
using namespace std;
using namespace ariel;
Game::Game(){
    this->home;
    this->out;
    this->win=home->get_name();
}
Game::Game(Team *home_team, Team *out_team){
    this->home = home_team;
    this->out = out_team;
}
void Game::play_game(){
    int bonus_points = rand()%11;
    int basic_solution = rand()%51 + 50;
    
    int home_solution = rand()%46 + 55;
    home_solution += bonus_points;
    
    if (this->home->get_unique() > 0.5)
    {
       home_solution += bonus_points;
    }
    if (this->out->get_unique() > 0.5)
    {
       basic_solution += bonus_points;
    }
    if(home->get_points() >= out->get_points()){
        if(home_solution >= basic_solution){
        home->set_seq_of_vic(1);
        out->set_seq_of_loss(1);
        }
    }
    if(out->get_points() >= home->get_points()){
        if(basic_solution >= home_solution){
        out->set_seq_of_vic(1);
        home->set_seq_of_loss(1);
        }
    }
}    
string Game::get_winner(){
    return this->win;
}
double Game::avg(int points1, int points2){
    return ((points1 + points2)/2);
}
double Game::devitaion(double avg, int points1,int points2){
    return sqrt(((pow((points1 - avg),2) + pow((points2 - avg),2))));
}
