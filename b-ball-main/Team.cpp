#include "iostream"



#include "Team.hpp"
using namespace std;
using namespace ball;


Team::Team(){
    this->_name = "";
    this->unique = 0;
    this->points = 0;
}
Team::Team(string name, double unique){
    if(unique > 1 || unique < 0){
        throw invalid_argument("invalid unique");    
    }
    if(name == "\n" || name == "\t" || name == "\r" || name == " " || name == ""){
        throw invalid_argument("invalid name");
    }
    this->_name = name;
    this->unique = unique;
    this->points = 0;
}
string Team::get_name(){
    return this->_name;
}
double Team::get_unique(){
    return this->unique;
}
string Team::set_name(string new_name){
    this->_name = new_name;
}