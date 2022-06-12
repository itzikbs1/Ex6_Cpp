#include <iostream>
#include "Schedule.hpp"


using namespace std;

namespace ball{
Schedule::Schedule(){

}
       
Schedule::Schedule(vector<Team*> teams){
    this->teams = teams;
}

vector<Game*> Schedule::Build_sch(){
    if(this->teams.empty()){
        throw invalid_argument("yot dont have teams for that");
    }
    for (size_t i = 0; i < teams.size(); i++)
    {
        for (size_t j = 0; j < teams.size(); j++)
        {
            if(i!=j){
                this->scheduale.push_back(new Game(this->teams.at(i), this->teams.at(j)));
            }
        }
    }
    return this->scheduale;
}
};