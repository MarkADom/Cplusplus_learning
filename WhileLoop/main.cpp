#include <iostream>

int main()
{

    const size_t COUNT{100};
    size_t i{0}; // Iterator declaration

    while (i < COUNT) // Test
    {
        std::cout << i << " : I love C++" << std::endl;

        ++i; // Incrimination
    }

    std::cout << "Loop Done!" << std::endl;

    return 0;
}
