#include <iostream>
#include "Schedule.hpp"


using namespace std;

namespace ariel{
Schedule::Schedule(){

}
       
Schedule::Schedule(vector<Team*> teams){
    this->teams = teams;
}

vector<Game*> Schedule::Create(){
    int size = teams.size();
    for (size_t i = 0; i < size; i++)
    {
        for (size_t k = 0; k < size; k++)
        {
            if(i==k){
                continue;
            }else{
                this->scheduale.push_back(new Game(this->teams.at(i), this->teams.at(k)));
            }
        }
    }
    return this->scheduale;
}
};