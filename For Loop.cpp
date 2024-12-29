#include <iostream>

int main(void)
{
    int start, end;
    char numbers[9][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    std::cin >> start;
    std::cin >> end;

    for(int index = start; index <= end; index++)
    {
        if(index <= 9) std::cout << numbers[index - 1] << std::endl;
        else if((index % 2) == 0) std::cout << "even\n";
        else std::cout << "odd\n";
    }

    return 0;
}
