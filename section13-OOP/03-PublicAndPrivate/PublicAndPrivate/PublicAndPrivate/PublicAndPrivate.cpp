#include <iostream>
#include <string>

class Player {
private:
    //Attributes
    std::string name{"Player"};
    int health;
    int xp;
public:
    //Methods
    void talk(std::string text_to_say) {
        std::cout << name << " says: " << text_to_say << std::endl;
    };
    bool is_dead();
};

int main()
{
    Player frank;
    // frank.name = "Frank"; //Error, field is private
    // std::cout<<frank.name<<std::endl //Error
    frank.talk("methods inside the class are able to access private variables because this method is public");


    return 0;
}