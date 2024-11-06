#include <iostream>

int main()
{
    int numOne = 15;          // Decimal
    int numTwo = 017;         // Octal
    int numThree = 0x0F;      // Hexadecimal
    int numFour = 0b00001111; // Binary

    std::cout << "Number1 :" << numOne << std::endl;
    std::cout << "Number2 :" << numTwo << std::endl;
    std::cout << "Number3 :" << numThree << std::endl;
    std::cout << "Number4 :" << numFour << std::endl;

    return 0;
}