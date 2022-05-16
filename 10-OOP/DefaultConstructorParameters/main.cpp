// Section 13
// Default Constructor Parameters
#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

int main() {
    
    Player empty;
    empty.displayPlayer();
    Player frank {"Frank"};
    frank.displayPlayer();
    Player hero {"Carlos", 100};
    hero.displayPlayer();
    Player villain {"Diego", 100, 55};
    villain.displayPlayer();
    
    return 0;
}

