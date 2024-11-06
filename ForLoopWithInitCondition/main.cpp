#include <iostream>

int main()
{

    // for loop to print the result of multiplying each element in the list  by a constant value of 4.

    for (double multiplier{4}; auto i : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "result : " << (i * multiplier) << std::endl;
    }

    return 0;
