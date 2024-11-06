#include <iostream>

int main()
{

    // for loop : the good way

    for (unsigned int i{0}; i < 10000; ++i)
    {
        // Whatever we want the loop to run
        std::cout << i << " : I Love C++ " << std::endl;
    }

    std::cout << "Lopp Done!" << std::endl;

    std::cout << "---------------------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    // Use size_t : a representation of some unsigned int for positive numbers [sizes]

    for (size_t i{0}; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop Done!" << std::endl;

    std::cout << "---------------------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    sizeof(size_t);
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;

    std::cout << "---------------------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    // Scope of the iterator
    for (size_t i{0}; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop Done!" << std::endl;

    // std::cout << "i : " << i << std::endl; // Compiler error : i is not in scope

    // Iterator declared outside the loop
    size_t i{0}; // Iterator defined outside

    for (i; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;

    std::cout << "---------------------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    // Leave out the iterator declaration part
    /*
        size_t i{0}; // Iterator defined outside

        for (; i < 10; i++)
        {
            std::cout << i << " : I love C++" << std::endl;
        }

        std::cout << "Loop done!" << std::endl;
        std::cout << "i : " << i << std::endl;

    */

    std::cout << "---------------------------" << std::endl;
    std::cout << "---------------------------" << std::endl;

    // Don´t hard code values : BAD!

    const size_t count{100};

    for (size_t i = 0; i < count; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    return 0;
}
