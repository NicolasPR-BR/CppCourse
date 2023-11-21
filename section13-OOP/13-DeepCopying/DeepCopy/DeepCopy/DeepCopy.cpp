#include <iostream>

class Deep {
private:
    int* data{new int};

public:
    void set_data_value(int v);
    int getData() { return *data; };
    Deep(int d);
    Deep(const Deep &ref);
    ~Deep();
};

void Deep::set_data_value(int v) {
   
}

Deep::Deep(int d){
    *data = d;
    std::cout << "Constructor" << std::endl;
};

Deep::Deep(const Deep &ref) : Deep(*ref.data){
}

Deep::~Deep() {
    delete data;
    std::cout << "Destructor freeing data" << std::endl;
}

void display_deep(Deep ref) {
    std::cout << "The value is: " << ref.getData() << std::endl;
}

int main()
{
    Deep obj1{ 100 };
    display_deep(obj1);

    Deep obj2{obj1};
    obj2.set_data_value(1000);
    
    return 0;
}