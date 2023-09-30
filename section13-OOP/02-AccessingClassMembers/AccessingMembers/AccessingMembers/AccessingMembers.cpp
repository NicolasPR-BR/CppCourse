#include <iostream>
#include <string>
#include <vector>

class Player {
    // Attributes
public:
    std::string name{ "Player" };
    int health{ 0 };
    int xp{ 0 };

    //Methods
    void talk(std::string text_to_say) {
        std::cout << name << " says: " << text_to_say<<std::endl;
    };
    bool is_dead();
};

class Account {
public:
    //Attributes
    std::string name{ "Account" };
    double balance{ 0.0 };
    //Methods
    bool deposit(double);
    bool widthdraw(double);
};

int main()
{
    // We could declare class here, but then it would be scope limited
    // And we don't really want that
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.talk("Hello");
    Player hero;
    hero.name = "Hero";
    hero.health = 50;

    Player players[]{ frank, hero };

    std::vector<Player> playerVec{ frank };
    playerVec.push_back(hero);

    Player* enemy = new Player(); //Creates new player on the heap
    enemy->health = 100;
    enemy->name = "Enemy";
    enemy->talk("gg");

    std::cout << "Player: " << enemy->name << ", has " << enemy->health << " health points" << std::endl;

    Account frankAcc;
    Account heroAcc;
    Account* enemyAcc = new Account;
    (*enemyAcc).name = "Enemy account";
    (*enemyAcc).balance = 100.0;
    std::cout << (*enemyAcc).name << " has $" << (*enemyAcc).balance << " in their bank account" << std::endl;

    delete enemy;
    delete enemyAcc;
    return 0;
}