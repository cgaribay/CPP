#include <iostream>
#include <string>
#include "Player.h"

Player::Player(std::string name_val, int health_val, int xp_val) 
    : name(name_val), health(health_val), xp(xp_val) {
        std::cout << "Three-args constructor" << std::endl;
}

void Player::displayPlayer() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "XP: " << xp << std::endl;
}