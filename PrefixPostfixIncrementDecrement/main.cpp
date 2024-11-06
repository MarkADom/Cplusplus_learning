#include <iostream>

int main()
{

    int value{5};

    std::cout << std::endl;

    std::cout << "======Increment and Decrement by one======" << std::endl;

    std::cout << std::endl;

    // Increment by one
    value = value + 1;                                    // 6
    std::cout << "The value is : " << value << std::endl; // print 6

    value = 5; // Reset value to 5

    // Decrement by one
    value = value - 1;                                    // 4
    std::cout << "The value is : " << value << std::endl; // print 4

    value = 5; // Reset value to 5

    std::cout << std::endl;

    std::cout << "======PostFix increment and decrement======" << std::endl;

    std::cout << std::endl;

    // increment with postfix
    std::cout << "The vallue is (incrementing by 1) : " << value++ << std::endl; // 5
    std::cout << "The value is : " << value << std::endl;                        // 6

    std::cout << std::endl;

    value = 5; // Reset value to 5

    // Decrement with postfix

    std::cout << "The value is (decrementing by 1) : " << value-- << std::endl; // 5
    std::cout << "The value is : " << value << std::endl;                       // 4

    value = 5; // Reset value to 5

    std::cout << std::endl;

    std::cout << "======Prefix increment and decrement======" << std::endl;

    std::cout << std::endl;

    // Increment by prefix
    ++value;
    std::cout << "The value is (prefix++) : " << value << std::endl; // 6

    value = 5; // Reset value to 5

    std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6

    value = 5; // Reset value to 5

    std::cout << std::endl;

    // Decrement by prefix
    --value;
    std::cout << "The value is (prefiX--) : " << value << std::endl; // 4

    value = 5; // Reset value to 5

    std::cout << "The value is (prefix-- in place) : " << --value << std::endl; // 4

    return 0;
}
