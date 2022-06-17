#include "iostream"
#include "Team.hpp"
#include <vector>
using namespace std;

namespace ariel{
class Leauge{

private:
    vector<Team*> Leauge_bas;
    string default_name;
public:
    Leauge();
    Leauge(vector<Team*> leauge);
    void League_rand();
    void League_both(vector<Team*> legue);
    bool unique_name(Team* team);
    vector<Team*> get_Leauge_bas();
};
}