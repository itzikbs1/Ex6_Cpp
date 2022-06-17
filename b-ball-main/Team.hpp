#pragma once
#include <iostream>

using namespace std;
namespace ariel{
class Team{

private:
    string _name;
    double unique;
    int points; 
    int victory_ratio;
    int loss_ratio;
    int slim_difference;
    int sequence_of_victories;
    int sequence_of_losses;
public:
    Team();
    Team(string name, double unique);
    string get_name();
    double get_unique();
    int get_points();
    string set_name(string new_name);
    void set_seq_of_vic(int i);
    void set_seq_of_loss(int i);
    void set_points(int new_score);
    };
}