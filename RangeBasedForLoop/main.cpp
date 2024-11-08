#include <iostream>

int main()
{
    // This is a collection of integers
    int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // The variable value will be assigned a value from the values array on each iteration

    for (size_t i{0}; i < 10; i++)
    {
        std::cout << "value : " << bag_of_values[i] << std::endl;
    }

    std::cout << "-----------------------" << std::endl;

    for (int value : bag_of_values)
    {
        // value holds a copy of the current iteration in the whole bag
        std::cout << "value : " << value << std::endl;
    }

    std::cout << "-----------------------" << std::endl;

    /*
        // Specify the collection in place
        for (int value2 : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
        {
            // value holds a copy of the current iteration in the whole bag
            std::cout << " value : " << value2 << std::endl;
        }
    */

    std::cout << "-----------------------" << std::endl;

    // Auto type deduction
    for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        // value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }

    return 0;
}