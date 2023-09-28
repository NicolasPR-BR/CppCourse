#include <iostream>

int* create_array(size_t size, int init_value = 0) {
    int* new_storage{ nullptr };
    new_storage = new int[size];
    for (size_t i{ 0 }; i < size; i++)
        *(new_storage + i) = init_value;
    return new_storage;
}

void display(const int* const array, size_t size) {
    
    int i{};
    //for (size_t i{ 0 }; i < size; i++)
    while(i < size)
        std::cout << array[i++] << std::endl;
    std::cout << std::endl;
}

int main()
{
    int* my_array{};
    size_t size;
    int init_value{};

    std::cout << "\nHow many integers would you like to allocate? ";
    std::cin >> size;
    std::cout << "What value would you like them initialized to? ";
    std::cin >> init_value;
    my_array = create_array(size, init_value);

    std::cout << std::string(50, '*') << std::endl;
    display(my_array, size);
    std::cout << std::string(50, '*') << std::endl;

    delete(my_array);
    return 0;
}