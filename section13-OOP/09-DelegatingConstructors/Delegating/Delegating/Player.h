#pragma once
#include <string>
#include <iostream>

class Player {
private:
    //Attributes
    std::string name;
    int health;
    int xp;
public:
    //Methods
    //Inline methods
    Player();
    Player(std::string name);
    Player(std::string name, int health, int xp);
    ~Player();

    //These methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();
};