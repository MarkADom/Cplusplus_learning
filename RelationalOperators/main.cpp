#include <iostream>

int main()
{

    int num1{20};
    int num2{20};

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    // Makes de bool shows up as true/false instead of 0/1
    std::cout << std::boolalpha;
    // Stress the need for parentheses here
    std::cout << "num1 < num2 :" << (num1 < num2) << std::endl;
    std::cout << "num1 <= num2 :" << (num1 <= num2) << std::endl;
    std::cout << "num1 > num2 :" << (num1 > num2) << std::endl;
    std::cout << "num1 >= num2 :" << (num1 >= num2) << std::endl;
    std::cout << "num1 == num2 :" << (num1 == num2) << std::endl;
    std::cout << "num1 != num2 :" << (num1 != num2) << std::endl;

    std::cout << std::endl;
    std::cout << "store comparison result and use it later" << std::endl;

    bool result = (num1 == num2);

    std::cout << num1 << "==" << num2 << " : " << result << std::endl;

    return 0;
}
