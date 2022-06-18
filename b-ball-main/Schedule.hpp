#include <iostream>
#include <vector>

#include "Team.hpp"
#include "Game.hpp"
using namespace std;

namespace ariel{
    class Schedule{
        private:
            vector<Team*> teams;
            vector<Game*> scheduale;
        public:
            Schedule();
            Schedule(vector<Team*> teams);
            vector<Game*> Create();
    };
}