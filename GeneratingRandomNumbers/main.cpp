#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    /*
    function to generate a seed value for the random
    number generator provided by the std::srand.
    The std::time function returns the number of seconds
    that have passed, which is a constantly changing value.
     By passing this value as a seed to the std::srand function,
     you can initialize the random number generator with a different
     seed each time the program runs
    */

    std::srand(std::time(0)); // Seed

    int random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ Rand_Max

    // Generate a random number in a loop
    int random_num2;

    for (size_t i{0}; i < 20; i++)
    {
        random_num2 = std::rand();
        std::cout << "random_num2 " << i << " : " << random_num2 << std::endl; // 0 ~ Rand_Max
    }

    // Generate a range between 0 and 10
    int random_num3 = std::rand() % 11; // [0~10]

    for (size_t i{0}; i < 20; i++)
    {
        random_num3 = std::rand() % 11;
        std::cout << "random_num3 " << i << " i " << random_num3 << std::endl; // 0 ~ Rand_Max
    }

    int random_num4 = std::rand() % 10 + 1; // [1~10]
    for (size_t i{0}; i < 20; i++)
    {
        random_num4 = std::rand() % 10 + 1;
        std::cout << "random_num4 " << i << "  :   " << random_num4 << std::endl; // 0 ~ RAND_MAX
    }

    return 0;
}
