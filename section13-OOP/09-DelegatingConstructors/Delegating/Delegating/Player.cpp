#include "Player.h"

Player::Player() :name{ "noName" }, health{ 0 }, xp{ 0 } {
    std::cout << "No args constructors" << std::endl;
}

Player::Player(std::string name) :name{ name    }, health{ 0 }, xp{0} {
    std::cout << "String arg constructor called" << std::endl;
}

Player::Player(std::string name, int health, int xp) : name{ name }, health{ health }, xp{xp} {
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