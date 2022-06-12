#pragma once
#include <iostream>

using namespace std;
namespace ball{
class Team{

private:
    string _name;
    double unique;
    int points; 
public:
    Team();
    Team(string name, double unique);
    string get_name();
    double get_unique();
    string set_name(string new_name);
    };
}