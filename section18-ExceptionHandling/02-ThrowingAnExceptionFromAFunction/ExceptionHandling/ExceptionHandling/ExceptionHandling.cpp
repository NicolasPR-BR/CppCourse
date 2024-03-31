#include <iostream>

double calculate_avg(int miles, int gallons) {
    if (gallons == 0)
        throw 0;
        
    return static_cast<double>(miles) / gallons;
}

int main()
{
    
    int miles{};
    int gallons{};

    std::cout << "Insert the gallons: ";
    std::cin >> miles;

    std::cout << "Inset the miles: ";
    std::cin >> gallons;

    try {
        double miles_per_gallon{calculate_avg(miles, gallons)};

        std::cout << "Result: " << miles_per_gallon <<std::endl;
    }
    catch (int& ex) {
        std::cerr << "Can't divide by zero" << std::endl;
    }
        
    return 0;
}