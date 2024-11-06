#include <iostream>

int addNumbers(int first_param, int second_param)
{
    int result = first_param + second_param;
    return result;
}

int main(int argc, char **argv)
{
    int first_number{3};
    int seconf_numner{7};

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << seconf_numner << std::endl;

    int sum = first_number + seconf_numner;
    std::cout << "Sum1 : " << sum << std::endl;

    sum = addNumbers(22, 7);
    std::cout << "Sum2 : " << sum << std::endl;

    sum = addNumbers(first_number, seconf_numner);
    std::cout << "Sum3 : " << sum << std::endl;

    std::cout << "Sum4 :" << addNumbers(32, 23) << std::endl;

    return 0;
}