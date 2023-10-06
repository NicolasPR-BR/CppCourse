#include "Player.h"

Player::Player() {
    std::cout << "No args constructors" << std::endl;
}

Player::Player(std::string name) {
    std::cout << "String arg constructor called" << std::endl;
}

Player::Player(std::string name, int health, int xp) {
    std::cout << "Three args constructor called" << std::endl;
}

Player::~Player() {
    std::cout << "Destructor called" << std::endl;
}

void Player::set_name(std::string name) {
    this->name = name;
}

std::string Player::get_name() {
    return this->name;
}