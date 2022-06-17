#include <iostream>
#include "Game.hpp"
#include "Leauge.hpp"
#include "Schedule.hpp"
#include "Team.hpp"
#include "doctest.h"
using namespace std;
using namespace ariel;


TEST_CASE("CHECK VALID"){
    Team *team1 = new Team();
    Team *team2 = new Team();
    CHECK(team1->get_unique() == 0);
    CHECK(team2->get_unique() == 0);
    Game *game = new Game(team1, team2);
    team1->set_name("Gilboa Galil");
    team2->set_name("Maccbi tel aviv");
    CHECK(team1->get_name() == "Gilboa Galil");
    CHECK(team2->get_name() == "Maccbi tel aviv");
    CHECK(game->get_winner() == team1->get_name());
    game->play_game();
    CHECK(game->get_winner() == team1->get_name());
    team1->set_name("Gilboa galil");
    team2->set_name("Maccbi Tel Aviv");
    CHECK(team1->get_name() == "Gilboa galil");
    CHECK(team2->get_name() == "Maccbi Tel Aviv");
}
TEST_CASE("bad input"){
    Team *team1 = new Team();
    Team *team2 = new Team();
    Game *game = new Game(team1, team2);
    team1->set_name("Gilboa Galil");
    team2->set_name("Maccbi tel aviv");
    CHECK_THROWS(team1->set_name("/r"));
    CHECK_THROWS(team1->set_name("/t"));
    CHECK_THROWS(team1->set_name("/n"));
    CHECK_THROWS(team1->set_name(""));
    CHECK_THROWS(team1->set_name(" "));
    CHECK_THROWS(team2->set_name("/r"));
    CHECK_THROWS(team2->set_name("/n"));
    CHECK_THROWS(team2->set_name("/t"));
    CHECK_THROWS(team2->set_name(""));
    CHECK_THROWS(team2->set_name(" "));
    Team *other = new Team();
    other->set_name("Gilboa Galil");
    vector<Team*> vec;
    vec.clear();
    vec.push_back(team1);
    vec.push_back(team2);
    vec.push_back(other);
    Leauge *leauge = new Leauge(vec);
    CHECK_NE(leauge->get_Leauge_bas().size(), 1);
    other->set_name("mac");
    vec.pop_back();
    vec.push_back(other);
    leauge = new Leauge(vec);
    CHECK_NE(leauge->get_Leauge_bas().size(), 0);

}