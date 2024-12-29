#include <iostream>

int main(void)
{
    int number;
    std::cin >> number;

    if(number == 1) std::cout << "one";
    else if(number == 2) std::cout << "two";
    else if(number == 3) std::cout << "three";
    else if(number == 4) std::cout << "four";
    else if(number == 5) std::cout << "five";
    else if(number == 6) std::cout << "six";
    else if(number == 7) std::cout << "seven";
    else if(number == 8) std::cout << "eight";
    else if(number == 9) std::cout << "nine";
    else std::cout << "Greater than 9";

    return 0;
}