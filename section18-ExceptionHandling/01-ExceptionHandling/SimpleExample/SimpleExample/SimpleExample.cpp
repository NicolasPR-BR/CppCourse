#include <iostream>

int main()
{
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    std::cout << "Enter the miles: ";
    std::cin >> miles;
    std::cout << "Enter the gallons: ";
    std::cin >> gallons;

    // Does not thrown an exception since division by zero with floating point results in inf
    //miles_per_gallon = static_cast<double>(miles) / gallons;
    try{
        if (gallons == 0)
            throw 0;

        miles_per_gallon = static_cast<double>(miles) / gallons;
    }
    catch(int& ex){
        std::cerr << "Err: Division by zero" << std::endl;
    }

    std::cout << "Result: "<<miles_per_gallon << std::endl;

    return 0;
}