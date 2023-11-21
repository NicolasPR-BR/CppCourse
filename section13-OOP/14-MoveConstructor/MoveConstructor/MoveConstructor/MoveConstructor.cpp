#include <iostream>
#include <vector>

class Move{
private:
    int* data{};
public:
    void setValue(int d) { *data = d; }
    int getValue() { return *data; }
    Move(int d);
    Move(const Move& source);
    //We receive an R-Value because it's not a named object
    //Move(Move &&source) noexcept; //Move constructor
    ~Move();
};

Move::Move(int d) {
    data = new int;
    *data = d;
    std::cout << "Constructor for: " << d << std::endl;
}

//Copy
Move::Move(const Move& source) : Move{*source.data} {
    std::cout << "Copy constructor - deep copy for " << *data << std::endl;
}

Move::~Move() {
    if (data) {
        std::cout << "Freeing data " <<*data<< std::endl;

    }
    else {
        std::cout << "Nullptr" << std::endl;
    }


}

//Move::Move(Move&& source) noexcept: data { source.data }{
//   source.data = 0;
//   std::cout << "Move constructor" << std::endl;
//}

int main()
{
    std::vector<Move> vec;

    // Constructor called twice
    // Copy constructor called once
    // Vector makes a copy of the object
    vec.push_back(Move{ 10 });

    // Many deep copies will be made
    
    /*vec.push_back(Move{ 20 });
    vec.push_back(Move{ 30 });
    vec.push_back(Move{ 40 });
    vec.push_back(Move{ 50 });
    vec.push_back(Move{ 60 });
    vec.push_back(Move{ 70 });
    vec.push_back(Move{ 80 });*/

    //When we allow move copying by uncommenting Move::Move(Move &&source)
    // copy time to run: 57ms
    // Move: 35ms
    
    //Copy
    /*Constructor for: 10
        Constructor for : 10
        Copy constructor - deep copy for 10
        Freeing data 10
        Freeing data 10*/

    //Move
    /*Constructor for: 10
        Move constructor
        Nullptr
        Freeing data 10
    */

    return 0;
}