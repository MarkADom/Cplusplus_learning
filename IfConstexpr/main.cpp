#include <iostream>

int main()
{

    /*
    The constexpr specifier declares that it is possible to evaluate
    the value of the function or variable at compile time. Such variables
    and functions can then be used where only compile time constant expressions
    are allowed (provided that appropriate function arguments are given).
    */

    constexpr bool condition{false};

    if constexpr (condition)
    {
        std::cout << "Condition is true" << std::endl;
    }
    else
    {
        std::cout << "Condition is false" << std::endl;
    }

    return 0;
}
