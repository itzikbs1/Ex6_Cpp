#include <iostream>
#include <vector>

#include "Team.hpp"
#include "Game.hpp"
using namespace std;

namespace ball{
    class Schedule{
        private:
            vector<Team*> teams;
            vector<Game*> scheduale;
        public:
            Schedule();
            Schedule(vector<Team*> teams);
            vector<Game*> Build_sch();
    };
}