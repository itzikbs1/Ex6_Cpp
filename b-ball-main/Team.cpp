#include "iostream"



#include "Team.hpp"
using namespace std;
using namespace ariel;


Team::Team(){
    this->_name = "";
    this->unique = 0;
    this->points = 0;
    this->victory_ratio=0;
    this->loss_ratio=0;
    this->slim_difference=0;
    this->sequence_of_victories=0;
    this->sequence_of_losses=0;
}
Team::Team(string name, double unique){
    if(unique <= 1 && unique >= 0){
    this->_name = name;
    this->unique = unique;
    this->points = 0;
    this->victory_ratio=0;
    this->loss_ratio=0;
    this->slim_difference=0;
    this->sequence_of_victories=0;
    this->sequence_of_losses=0;
    }else{
        throw invalid_argument("invalid unique");    
    }
}

string Team::get_name(){
    return this->_name;
}
double Team::get_unique(){
    return this->unique;
}
int Team::get_points(){
    return this->points;
}
string Team::set_name(string new_name){
    this->_name = new_name;
}
void Team::set_seq_of_vic(int i){
    if(i == 1){
    this->sequence_of_victories++;
    }else if(i == 0){
        this->sequence_of_victories=0;
    }
}
void Team::set_seq_of_loss(int i){
    if(i==1){
        this->sequence_of_losses++;
    }else if(i == 0){
        this->sequence_of_losses=0;
    }
}
void Team::set_points(int new_score){
    this->points+=new_score;
}