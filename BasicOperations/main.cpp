#include <iostream>

int main()
{

    int numOne{2};
    int numTwo{7};

    // Addition
    int result = numOne + numTwo;
    std::cout << "result Add: " << result << std::endl;

    // Substraction
    result = numOne - numTwo;
    std::cout << "result Sub: " << result << std::endl;

    result = numTwo - numOne;
    std::cout << "result Sub2: " << result << std::endl;

    // Multiplication
    result = numOne * numTwo;
    std::cout << "result Mult: " << result << std::endl;

    // Division
    result = numTwo / numOne;
    std::cout << "result Div: " << result << std::endl;

    // Modulus
    result = numTwo % numOne;                           // 7%2
    std::cout << "result Mod: " << result << std::endl; // 1

    result = 31 % 10;
    std::cout << "result Mod2: " << result << std::endl; // 1

    return 0;
}
