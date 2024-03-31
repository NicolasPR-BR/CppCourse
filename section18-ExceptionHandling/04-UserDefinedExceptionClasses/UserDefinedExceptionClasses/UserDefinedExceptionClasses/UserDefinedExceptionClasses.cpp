#include <iostream>

class DivideByZeroException{};
class NegativeValueException {};

double calculate_mpg(int miles, int gallons) {
    if (gallons == 0)
        throw DivideByZeroException{};
    if (gallons < 0 || miles < 0)
        throw NegativeValueException{};

    return static_cast<double>(miles) / gallons;
}

int main()
{
    double miles_per_gallons{};
    int miles, gallons;
    std::cout << "Input the miles: ";
    std::cin >> miles;
    std::cout << "Input the gallons: ";
    std::cin >> gallons;

    try {
        miles_per_gallons = calculate_mpg(miles, gallons);

        std::cout << "Result: " << miles_per_gallons << std::endl;
    }
    catch (NegativeValueException &ex) {
        std::cout << "Negative value exception"<<std::endl;
    }
    catch (DivideByZeroException& ex) {
        std::cout << "Divide by zero exception" << std::endl;
    }

    return 0;
}