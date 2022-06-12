#include "iostream"
#include "Leauge.hpp"
#include "math.h"
#include "string"

using namespace std;
using namespace ball;


Leauge::Leauge(vector<Team*> leauge){
    if(leauge.size() > 20){
        throw invalid_argument("too much teams!");
    }
    for (size_t i = 0; i < leauge.size(); i++)
    {
        if(unique_name(leauge.at(i))){
            this->Leauge_bas.push_back(leauge.at(i));
        }
    }
}
Leauge::Leauge(){
}
void Leauge::League_rand(){
    this->Leauge_bas.clear();
    double rand_ = rand()%1;
    string name = "Gilboa Galil";
    for (size_t i = 0; i < 20; i++)
    {
        this->Leauge_bas.push_back(new Team((name + to_string(i)), rand_));
    }
}
void Leauge::League_both(vector<Team*> league){
    this->Leauge_bas.clear();
    int random = rand() % 20;
    int actual_group = 0;
    for (size_t i = 0; i < random; i++)
    {
        if(unique_name(league.at(i))){
            this->Leauge_bas.push_back(league.at(i));
            actual_group++;
        }
    }
    double rand_ = rand()%1;
    string name = "Gilboa Galil";
    for (size_t i = actual_group; i < 20-actual_group; i++)
    {
        this->Leauge_bas.push_back(new Team((name + to_string(i)), rand_));
    }
}

bool Leauge::unique_name(Team* team){
    for (size_t i = 0; i < this->Leauge_bas.size(); i++)
    {
        if(team->get_name() == this->Leauge_bas.at(i)->get_name()){
            return false;
        }
    }
    return true;
}
vector<Team*> Leauge::get_Leauge_bas(){
    return this->Leauge_bas;
}