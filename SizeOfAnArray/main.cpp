#include <iostream>

int main()
{

    int scores[]{1, 2, 5};

    /*
    int count{std::size(scores)}; // std::size (C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << " bytes" << std::endl;
    std::cout << "sizeof(scores[0] : " << sizeof(scores[0]) << " bytes" << std::endl;
    std::cout << "count : " << count << std::endl;
    */

    /*
    Calculates the number of elements in the "scores" array. It first uses the sizeof() operator
    to determine the total size of the array in bytes, and then divides that by the size of
    a single element in the array (sizeof(scores[0])) to get the number of elements in the array.
    This value is stored in the integer variable count.
    */
    int count{sizeof(scores) / sizeof(scores[0])};

    for (size_t i{0}; i < count; i++)
    {
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }

    // Range based for loop
    for (auto i : scores)
    {
        std::cout << "value : " << i << std::endl;
    }

    return 0;
}
