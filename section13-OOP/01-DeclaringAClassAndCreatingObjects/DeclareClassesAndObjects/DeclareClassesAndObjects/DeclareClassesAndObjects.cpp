#include <iostream>
#include <string>
#include <vector>

class Player {
    // Attributes
    std::string name{"Player"};
    int health{0};
    int xp{0};

    //Methods
    void talk(std::string);
    bool is_dead();
};

class Account {
    //Attributes
    std::string name{"Account"};
    double balance{0.0};
    //Methods
    bool deposit(double);
    bool widthdraw(double);
};

int main()
{
    // We could declare class here, but then it would be scope limited
    // And we don't really want that
    Player frank;
    Player hero;
    
    Player players[]{ frank, hero };

    std::vector<Player> playerVec{frank};
    playerVec.push_back(hero);

    Player* enemy = new Player(); //Creates new player on the heap
    
    Account frankAcc;
    Account heroAcc;
    Account* enemyAcc = new Account;

    
    delete enemy;
    delete enemyAcc;
    return 0;
}