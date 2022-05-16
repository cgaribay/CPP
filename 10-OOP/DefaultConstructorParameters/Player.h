#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
private:
   std::string name;
   int health;
   int xp;
public:
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    void displayPlayer();
    // Player(int health_val = 0, int xp_val = 0);
  //  Player() {}    // Will cause a compiler error
};

#endif